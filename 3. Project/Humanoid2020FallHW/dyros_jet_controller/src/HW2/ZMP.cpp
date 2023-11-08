#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/walking_controller_hw.h"
#include "cvxgen_6_8_0/cvxgen/solver.h"
#include <fstream>
#include <tf/tf.h>

namespace dyros_jet_controller
{ 
    // ofstream ZMP_Graph("/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/ZMP_graph.csv");
    // HW2:
    void WalkingController::getZmpTrajectory()
    {
    unsigned int planning_step_number = 3;
    unsigned int norm_size = 0;
    
    if(current_step_num_ >= total_step_num_ - planning_step_number)
        norm_size = (t_last_ - t_start_ + 1)*(total_step_num_ - current_step_num_) + 20*hz_;
    else
        norm_size = (t_last_ - t_start_ + 1)*(planning_step_number); 
    if(current_step_num_ == 0)
        norm_size = norm_size + t_temp_ + 1;
    
    zmpGenerator(norm_size, planning_step_number);
    }



    void WalkingController::zmpGenerator(const unsigned int norm_size, const unsigned planning_step_num)
    { 
    ref_zmp_.resize(norm_size, 2); 
    Eigen::VectorXd temp_px;
    Eigen::VectorXd temp_py;
    
    unsigned int index = 0;
    // 매 tick 마다 zmp가 3발 앞까지 계산 된다. 

    if(current_step_num_ == 0) // Walking을 수행 할 때, 정지 상태 일때 3초 동안 Ref X ZMP를 0으로 보냄. Y ZMP는 제자리 유지.  
    {
        for (int i = 0; i <= t_temp_; i++) //600 tick
        {
        if(i < 0.5*hz_) 
        {
            ref_zmp_(i,0) = com_support_init_(0) ;
            ref_zmp_(i,1) = com_support_init_(1) ;
        }
        else if(i < 1.5*hz_) 
        {
            double del_x = i - 0.5*hz_;
            ref_zmp_(i,0) = com_support_init_(0) - del_x * com_support_init_(0)/(1.0*hz_);
            ref_zmp_(i,1) = com_support_init_(1) ;
        }
        else 
        {
            ref_zmp_(i,0) = 0.0;
            ref_zmp_(i,1) = com_support_init_(1) ;
        }      
        index++;
        }    
    }
    if(current_step_num_ >= total_step_num_ - planning_step_num)
    {  
        for(unsigned int i = current_step_num_; i < total_step_num_; i++)
        {
        onestepZmp(i, temp_px, temp_py);
        
        for(unsigned int j = 0; j < t_total_; j++)
        {
            ref_zmp_(index + j, 0) = temp_px(j);
            ref_zmp_(index + j, 1) = temp_py(j);    
        }
        index = index + t_total_;
        }
        
        for(unsigned int j = 0; j < 20*hz_; j++)
        {
        ref_zmp_(index + j, 0) = ref_zmp_(index -1, 0);
        ref_zmp_(index + j, 1) = ref_zmp_(index -1, 1);
        }
        index = index + 20*hz_;      
    }
    else // 보행 중 사용 하는 Ref ZMP
    { 
        for(unsigned int i = current_step_num_; i < current_step_num_ + planning_step_num; i++)  
        {
        onestepZmp(i, temp_px, temp_py);
        for (unsigned int j = 0; j < t_total_; j++) // 1 step 보행은 1.2초, 240 tick
        {
            ref_zmp_(index+j,0) = temp_px(j);
            ref_zmp_(index+j,1) = temp_py(j);
        }      
        index = index + t_total_; // 참조 zmp가 이만큼 쌓였다.      
        // 1Hz마다 720개의 ref_zmp를 생성함. 3.6초
        }   
    }   
    }


    void WalkingController::onestepZmp(unsigned int current_step_number, Eigen::VectorXd& temp_px, Eigen::VectorXd& temp_py)
    {
    temp_px.resize(t_total_); // 함수가 실행 될 때 마다, 240 tick의 참조 ZMP를 담는다. Realtime = 1.2초
    temp_py.resize(t_total_);
    temp_px.setZero();
    temp_py.setZero();

    double Kx = 0, Kx2 = 0, Ky = 0, Ky2 = 0, A = 0, B = 0, wn = 0;
    if(current_step_number == 0)
    { 
        wn = sqrt(GRAVITY / com_support_init_(2));
        A = -(foot_step_support_frame_(current_step_number, 1))/2 ;
        B =  (supportfoot_support_init_(0) + foot_step_support_frame_(current_step_number, 0))/2;
        Kx = (B * 0.15 * wn) / ((0.15*wn) + tanh(wn*(0.45)));
        Ky = (A * 0.15 * wn * tanh(wn*0.45))/(1 + 0.15 * wn * tanh(wn*0.45));
            
        for(int i = 0; i < t_total_; i++)
        {
        if(i >= 0 && i < t_rest_init_ + t_double1_) //0 ~ 0.15초 , 0 ~ 30 tick
        {
            temp_px(i) = 0;
            temp_py(i) = (com_offset_(1) + com_support_init_(1)) + Ky / (t_rest_init_ + t_double1_)* (i+1);
        }
        else if(i >= t_rest_init_ + t_double1_ && i < t_total_ - t_rest_last_ - t_double2_ ) //0.15 ~ 1.05초 , 30 ~ 210 tick
        {
            temp_px(i) = supportfoot_support_init_(0);
            temp_py(i) = supportfoot_support_init_(1);
        }
        else if(i >= t_total_ - t_rest_last_ - t_double2_  && i < t_total_) //1.05 ~ 1.15초 , 210 ~ 230 tick 
        {
            temp_px(i) = B - Kx + Kx / (t_rest_last_ + t_double2_) * (i+1 - (t_total_ - t_rest_last_ - t_double2_));
            temp_py(i) = Ky + (supportfoot_support_init_(1) + foot_step_support_frame_(current_step_number, 1))/2 + Ky/(t_rest_last_ + t_double2_)*-(i+1 - (t_total_ - t_rest_last_ - t_double2_));
        }
        }    
    }
    else if(current_step_number == 1)
    { 
        wn = sqrt(GRAVITY / com_support_init_(2));
        A = (foot_step_support_frame_(current_step_number-1, 1) - supportfoot_support_init_(1))/2 ;
        B = foot_step_support_frame_(current_step_number-1, 0) - (supportfoot_support_init_(0) + foot_step_support_frame_(current_step_number-1, 0))/2;
        Kx = (B * 0.15 * wn) / ((0.15*wn) + tanh(wn*(0.45)));
        Ky = (A * 0.15 * wn * tanh(wn*0.45))/(1 + 0.15 * wn * tanh(wn*0.45)); 
        
        for(int i = 0; i < t_total_; i++)
        {
        if(i >= 0 && i < t_rest_init_ + t_double1_) //0 ~ 0.15초 , 10 ~ 30 tick
        {
            temp_px(i) = (foot_step_support_frame_(current_step_number-1, 0) + supportfoot_support_init_(0))/2 + Kx / (t_rest_init_+ t_double1_) * (i+1);
            temp_py(i) = (foot_step_support_frame_(current_step_number-1, 1) + supportfoot_support_init_(1))/2 + Ky / (t_rest_init_+ t_double1_) * (i+1);
        }
        else if(i >= t_rest_init_ + t_double1_ && i < t_total_ - t_rest_last_ - t_double2_) //0.15 ~ 1.05초 , 30 ~ 210 tick
        {
            temp_px(i) = foot_step_support_frame_(current_step_number-1, 0);
            temp_py(i) = foot_step_support_frame_(current_step_number-1, 1);
        }
        else if(i >= t_total_ - t_rest_last_ - t_double2_ && i < t_total_) //1.05 ~ 1.2초 , 210 ~ 240 tick 
        {               
            temp_px(i) = (foot_step_support_frame_(current_step_number-1, 0) + foot_step_support_frame_(current_step_number, 0))/2 - Kx + Kx /(t_rest_last_ + t_double2_) * (i+1 - (t_total_ - t_rest_last_ - t_double2_));
            temp_py(i) = Ky + (foot_step_support_frame_(current_step_number-1, 1) + foot_step_support_frame_(current_step_number, 1))/2 + Ky/(t_rest_last_ + t_double2_)*-(i+1 - (t_total_ - t_rest_last_ - t_double2_));
        }
        }
    }
    else
    { 
        wn = sqrt(GRAVITY / com_support_init_(2));
        A = (foot_step_support_frame_(current_step_number-1, 1) - foot_step_support_frame_(current_step_number-2, 1))/2 ;
        B = foot_step_support_frame_(current_step_number-1, 0) - (foot_step_support_frame_(current_step_number-2, 0) + foot_step_support_frame_(current_step_number-1, 0))/2;
        Kx = (B * 0.15 * wn) / ((0.15*wn) + tanh(wn*(0.45))) ;
        Ky = (A * 0.15 * wn * tanh(wn*0.45))/(1 + 0.15 * wn * tanh(wn*0.45)); 
        for(int i = 0; i < t_total_; i++)
        {      
        if(i >= 0 && i < t_rest_init_ + t_double1_) //0 ~ 0.15초 , 0 ~ 30 tick
        { 
            temp_px(i) = (foot_step_support_frame_(current_step_number-2, 0) + foot_step_support_frame_(current_step_number-1, 0))/2 + Kx/(t_rest_init_ + t_double1_)*(i+1);
            temp_py(i) = (foot_step_support_frame_(current_step_number-2, 1) + foot_step_support_frame_(current_step_number-1, 1))/2 + Ky/(t_rest_init_ + t_double1_)*(i+1);
        }
        else if(i >= (t_rest_init_ + t_double1_) && i < (t_total_ - t_rest_last_ - t_double2_)) //0.15 ~ 1.05초 , 30 ~ 210 tick
        {
            temp_px(i) = foot_step_support_frame_(current_step_number-1, 0) ;
            temp_py(i) = foot_step_support_frame_(current_step_number-1, 1) ;
        }
        else if( i >= (t_total_ - t_rest_last_ - t_double2_) && (i < t_total_) && (current_step_num_ == total_step_num_ - 1))
        {
            temp_px(i) = (foot_step_support_frame_(current_step_number, 0) + foot_step_support_frame_(current_step_number-1, 0))/2;
            temp_py(i) = Ky + (foot_step_support_frame_(current_step_number-1, 1) + foot_step_support_frame_(current_step_number, 1))/2 + Ky/(t_rest_last_ + t_double2_)*-(i+1 - (t_total_ - t_rest_last_ - t_double2_));
        }       
        else if(i >= (t_total_ - t_rest_last_ - t_double2_) && i < t_total_) //1.05 ~ 1.2초 , 210 ~ 240 tick 
        { 
            temp_px(i) = (foot_step_support_frame_(current_step_number, 0) + foot_step_support_frame_(current_step_number-1, 0))/2 -Kx + Kx/(t_rest_last_ + t_double2_)*(i+1 - (t_total_ - t_rest_last_ - t_double2_));
            temp_py(i) = Ky + (foot_step_support_frame_(current_step_number-1, 1) + foot_step_support_frame_(current_step_number, 1))/2 + Ky/(t_rest_last_ + t_double2_)*-(i+1 - (t_total_ - t_rest_last_ - t_double2_));
        }
        } 
    }
    
    }
}