#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/walking_controller_hw.h"
#include "cvxgen_6_8_0/cvxgen/solver.h"
#include <fstream>
#include <tf/tf.h>

namespace dyros_jet_controller
{ 
    // ofstream com_data("/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/com_data.csv");
    void WalkingController::getComTrajectory()
    {
        unsigned int planning_step_number = 3;
        unsigned int norm_size = 0;
        
        if(current_step_num_ >= total_step_num_ - planning_step_number)
            norm_size = (t_last_ - t_start_ + 1)*(total_step_num_ - current_step_num_) + 20*hz_;
        else
            norm_size = (t_last_ - t_start_ + 1)*(planning_step_number); 
        if(current_step_num_ == 0)
            norm_size = norm_size + t_temp_ + 1;
        
        comGenerator(norm_size, planning_step_number);

        if(current_step_num_ == 0)
        {
            com_desired_(0) = ref_com_(walking_tick_,0);
            com_desired_(1) = ref_com_(walking_tick_,1);

            //HW5: Walk in Place
            if(walking_tick_ >t_start_)
            {
                com_desired_(0) = 0;
            }
        }
        else
        {
            // com_desired_(0) = ref_com_(walking_tick_ - t_start_, 0);
            // com_desired_(1) = ref_com_(walking_tick_ - t_start_, 1);

            //HW5: Walk in Place
            com_desired_(0) = 0;//ref_com_(walking_tick_ - t_start_, 0);
            com_desired_(1) = ref_com_(walking_tick_ - t_start_, 1);
        }

        com_desired_(2) = pelv_support_start_.translation()(2); 
    }

    void WalkingController::comGenerator(const unsigned int norm_size, const unsigned planning_step_num)
    { 
    ref_com_.resize(norm_size, 2); 
    Eigen::VectorXd temp_cx;
    Eigen::VectorXd temp_cy;
    
    unsigned int index = 0;

    if(current_step_num_ == 0)  
    {
        for (int i = 0; i <= t_temp_; i++) 
        { 
            ref_com_(i,0) = DyrosMath::cubic(i, 0, 2*hz_,com_support_init_(0) + com_offset_(0), 0, 0, 0);
            ref_com_(i,1) = com_support_init_(1);
            if(i >= 2*hz_)
            { 
                Eigen::Vector3d ref_y_com ;
                ref_y_com = (DyrosMath::QuinticSpline(i, 2*hz_, 3*hz_,com_support_init_(1), 0, 0, com_support_init_(1), 0.289384/hz_,0));
                ref_com_(i,1) = ref_y_com(0);
            }
            index++;
        }    
    }
    if(current_step_num_ >= total_step_num_ - planning_step_num)
    {  
        for(unsigned int i = current_step_num_; i < total_step_num_; i++)
        {
            onestepCom(i, temp_cx, temp_cy);
        
            for(unsigned int j = 0; j < t_total_; j++)
            {
                ref_com_(index + j, 0) = temp_cx(j);
                ref_com_(index + j, 1) = temp_cy(j);    
            }
            index = index + t_total_;
        }
        
        for(unsigned int j = 0; j < 20*hz_; j++)
        {
            ref_com_(index + j, 0) = ref_com_(index -1, 0);
            ref_com_(index + j, 1) = ref_com_(index -1, 1);
        }

        if((current_step_num_ == total_step_num_ - 1)) 
        { 
            Eigen::Vector3d ref_y_com ;
                
            for(int i = 0; i < 240; i++)
            {
                ref_y_com = DyrosMath::QuinticSpline(i+239, 120, 479, 0.031081, -2.60209e-18, 1.05331e-05, 0.12779, 0, 0);
                ref_com_(index + i, 1) = ref_y_com(0) ;
            }
        }

        index = index + 20*hz_;      
    }
    else 
    { 
        for(unsigned int i = current_step_num_; i < current_step_num_ + planning_step_num; i++)  
        {
        onestepCom(i, temp_cx, temp_cy);
        for (unsigned int j = 0; j < t_total_; j++) 
        {
            ref_com_(index+j,0) = temp_cx(j);
            ref_com_(index+j,1) = temp_cy(j);
        }      
        index = index + t_total_; 
        }   
    }   
    }

    void WalkingController::onestepCom(unsigned int current_step_number, Eigen::VectorXd& temp_cx, Eigen::VectorXd& temp_cy)
    {
    temp_cx.resize(t_total_);  
    temp_cy.resize(t_total_);
    temp_cx.setZero();
    temp_cy.setZero();

    double A = 0, B = 0, Cx1 = 0, Cx2 = 0, Cy1 = 0, Cy2 = 0, Kx = 0, Ky = 0, wn = 0 ;
    if(current_step_number == 0)
    { 
        wn = sqrt(GRAVITY / com_support_init_(2));
        A = -(foot_step_support_frame_(current_step_number, 1) )/2 ;
        B =  (supportfoot_support_init_(0) + foot_step_support_frame_(current_step_number, 0))/2;
        Kx = (B * 0.15 * wn) / ((0.15*wn) + tanh(wn*(0.45)));
        Ky = (A * 0.15 * wn * tanh(wn*0.45))/(1 + 0.15 * wn * tanh(wn*0.45)); 
        Cx1 = Kx - B;
        Cx2 = Kx/(wn*0.15);
        Cy1 = Ky - A;
        Cy2 = Ky/(wn*0.15);
            
        for(int i = 0; i < t_total_; i++)
        {
            temp_cx(i) = DyrosMath::cubic(i, 0, t_total_-1,0 ,0.10154 , 0, Kx/(t_rest_init_ + t_double1_));
            if(i >= 0 && i < (t_rest_init_ + t_double1_))
            {  
                temp_cy(i) = com_offset_(1) + com_support_init_(1) + Ky / (t_rest_init_ + t_double1_) * (i+1);
            }
            else if(i >= (t_rest_init_ + t_double1_) && i < t_total_ - t_rest_last_ - t_double2_ )
            {
                temp_cy(i) = A + com_offset_(1) + com_support_init_(1) + Cy1 *cosh(wn*(i/hz_ - 0.15)) + Cy2*sinh(wn*(i/hz_-0.15)) ;
            }
            else if(i >= t_total_ - t_rest_last_ - t_double2_  && i < t_total_) //1.05 ~ 1.15초 , 210 ~ 230 tick 
            {
                temp_cy(i) = Ky + (supportfoot_support_init_(1) + foot_step_support_frame_(current_step_number, 1))/2 + Ky/(t_rest_last_ + t_double2_)*-(i+1 - (t_total_ - t_rest_last_ - t_double2_));
            }     
        }    
    }
    else if(current_step_number == 1)
    { 
        wn = sqrt(GRAVITY / com_support_init_(2));
        A = (foot_step_support_frame_(current_step_number-1, 1) - supportfoot_support_init_(1))/2 ;
        B = foot_step_support_frame_(current_step_number-1, 0) - (supportfoot_support_init_(0) + foot_step_support_frame_(current_step_number-1, 0))/2;
        Kx = (B * 0.15 * wn) / ((0.15*wn) + tanh(wn*0.45));
        Ky = (A * 0.15 * wn * tanh(wn*0.45))/(1 + 0.15 * wn * tanh(wn*0.45)); 
        Cx1 = Kx - B;
        Cx2 = Kx/(wn*0.15);
        Cy1 = Ky - A;
        Cy2 = Ky/(wn*0.15);    
        for(int i = 0; i < t_total_; i++)
        {
        if(i >= 0 && i < (t_rest_init_ + t_double1_))
        { 
            temp_cx(i) = (foot_step_support_frame_(current_step_number-1, 0) + supportfoot_support_init_(0))/2 + Kx / (t_rest_init_+ t_double1_) * (i+1);
            temp_cy(i) = (foot_step_support_frame_(current_step_number-1, 1) + supportfoot_support_init_(1))/2 + Ky / (t_rest_init_+ t_double1_) * (i+1);
        }
        else if(i >= (t_rest_init_ + t_double1_) && i < (t_total_ - t_rest_last_ - t_double2_)) //0.15 ~ 1.05초 , 30 ~ 210 tick
        {
            temp_cx(i) = (supportfoot_support_init_(0) + foot_step_support_frame_(current_step_number-1, 0))/2 + Cx1 *cosh(wn*(i/hz_ - 0.15)) + Cx2*sinh(wn*(i/hz_-0.15)) + B;
            temp_cy(i) = A + (supportfoot_support_init_(1) + foot_step_support_frame_(current_step_number-1, 1))/2 + Cy1 *cosh(wn*(i/hz_ - 0.15)) + Cy2*sinh(wn*(i/hz_-0.15)) ;
        }
        else if(i >= (t_total_ - t_rest_last_ - t_double2_) && i < t_total_) //1.05 ~ 1.2초 , 210 ~ 240 tick 
        { 
            temp_cx(i) = (foot_step_support_frame_(current_step_number, 0)+ foot_step_support_frame_(current_step_number-1, 0)) /2 -Kx + Kx/(t_rest_last_ + t_double2_)*(i+1 - (t_total_ - t_rest_last_ - t_double2_));
            temp_cy(i) = Ky + (foot_step_support_frame_(current_step_number-1, 1) + foot_step_support_frame_(current_step_number, 1))/2 + Ky/(t_rest_last_ + t_double2_)*-(i+1 - (t_total_ - t_rest_last_ - t_double2_));
        }
        }
    }
    else
    { 
        wn = sqrt(GRAVITY / com_support_init_(2));
        A = (foot_step_support_frame_(current_step_number-1, 1) - foot_step_support_frame_(current_step_number-2, 1))/2 ;
        B = foot_step_support_frame_(current_step_number-1, 0) - (foot_step_support_frame_(current_step_number-2, 0) + foot_step_support_frame_(current_step_number-1, 0))/2;
        Kx = (B * 0.15 * wn) / ((0.15*wn) + tanh(wn*0.45));
        Ky = (A * 0.15 * wn * tanh(wn*0.45))/(1 + 0.15 * wn * tanh(wn*0.45)); 
        Cx1 = Kx - B;
        Cx2 = Kx/(wn*0.15);
        Cy1 = Ky - A;
        Cy2 = Ky/(wn*0.15);
        for(int i = 0; i < t_total_; i++)
        {
        if(i >= 0 && i < (t_rest_init_ + t_double1_))
        {
            temp_cx(i) = (foot_step_support_frame_(current_step_number-2, 0) + foot_step_support_frame_(current_step_number-1, 0))/2 + Kx/(t_rest_init_ + t_double1_)*(i);
            temp_cy(i) = (foot_step_support_frame_(current_step_number-2, 1) + foot_step_support_frame_(current_step_number-1, 1))/2 + Ky/(t_rest_init_ + t_double1_)*(i);
        }            
        else if(i >= (t_rest_init_ + t_double1_) && i < (t_total_ - t_rest_last_ - t_double2_)) //0.15 ~ 1.05초 , 30 ~ 210 tick
        {
            temp_cx(i) = (foot_step_support_frame_(current_step_number-2, 0) + foot_step_support_frame_(current_step_number-1, 0))/2 + Cx1 *cosh(wn*(i/hz_ - 0.15)) + Cx2*sinh(wn*(i/hz_-0.15)) + B;
            temp_cy(i) = A + (foot_step_support_frame_(current_step_number-2, 1) + foot_step_support_frame_(current_step_number-1, 1))/2 + Cy1 *cosh(wn*(i/hz_ - 0.15)) + Cy2*sinh(wn*(i/hz_-0.15)) ;
            
        }
        else if(i >= (t_total_ - t_rest_last_ - t_double2_) && i < t_total_) //1.05 ~ 1.2초 , 210 ~ 240 tick 
        {
            temp_cx(i) = (foot_step_support_frame_(current_step_number, 0)+ foot_step_support_frame_(current_step_number-1, 0)) /2 -Kx + Kx/(t_rest_last_ + t_double2_)*(i+1 - (t_total_ - t_rest_last_ - t_double2_));
            temp_cy(i) = Ky + (foot_step_support_frame_(current_step_number-1, 1) + foot_step_support_frame_(current_step_number, 1))/2 - Ky/(t_rest_last_ + t_double2_)*(i+1 - (t_total_ - t_rest_last_ - t_double2_));
        }
        
        if(i >= (t_rest_init_ + t_double1_) && (current_step_num_ == total_step_num_ - 1) && i < t_total_ ) //X방향, 마지막 Step에만 사용 됨. 오른발이 끝발 -2, 왼발이 끝발 -1
        { 
            Eigen::Vector3d ref_x_com ;
            ref_x_com = DyrosMath::QuinticSpline(i, 30, 239, (foot_step_support_frame_(current_step_number-2, 0) + foot_step_support_frame_(current_step_number-1, 0))/2 + Kx, 0.289384/hz_, 0, (foot_step_support_frame_(current_step_number-2, 0) + foot_step_support_frame_(current_step_number-1, 0))/2 + B, 0, 0);//com_support_init_(1)+com_offset_(1), 0.289384/hz_,0));
            temp_cx(i) = ref_x_com(0);
        }
        if( i >= 120 && i < t_total_ && (current_step_num_ == total_step_num_ - 1)) //마지막 Step에만 사용 됨. 오른발이 끝발 -2, 왼발이 끝발 -1
        { 
            Eigen::Vector3d ref_y_com ; 
            ref_y_com = DyrosMath::QuinticSpline(i, 120, 479, 0.031081, (Cy1 *sinh(wn*(120/hz_ - 0.15))*wn/hz_ + Cy2*cosh(wn*(120/hz_-0.15))*wn/hz_), (Cy1 *cosh(wn*(120/hz_ - 0.15))*wn/hz_*wn/hz_ + Cy2*sinh(wn*(120/hz_-0.15))*wn/hz_*wn/hz_), 0.12779, 0, 0);
            temp_cy(i) = ref_y_com(0);
        }      
        } 
    }
        
    }

 }