#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/walking_controller_hw.h"
#include "cvxgen_6_8_0/cvxgen/solver.h"
#include <fstream>
#include <tf/tf.h>

namespace dyros_jet_controller
{ 
    // ofstream Foot_Graph("/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/Foot_graph.csv");
    // HW4:

    // void WalkingController::getFootTrajectory()
    // {
    //     Eigen::Vector6d target_swing_foot;

    //     for(int i=0; i<6; i++)
    //         target_swing_foot(i) = foot_step_support_frame_(current_step_num_,i);

    //     if(walking_tick_ < t_start_real_+t_double1_)
    //     {
    //         if (current_step_num_ == 0)
    //         {
    //             lfoot_trajectory_support_.translation() = lfoot_support_init_.translation();
    //             lfoot_trajectory_dot_support_.setZero();


    //             if(foot_step_(current_step_num_,6) == 1) //left foot support
    //                 lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,lfoot_support_init_.translation()(2),0.0,0.0,0.0);
    //             else // swing foot (right foot support)
    //             {
    //                 if(current_step_num_ == 0)
    //                     lfoot_trajectory_support_.translation()(2) = lfoot_support_init_.translation()(2);
    //                 else
    //                 {
    //                     if(walking_tick_ < t_start_)
    //                         lfoot_trajectory_support_.translation()(2) = lfoot_support_init_.translation()(2);
    //                     else if(walking_tick_ >= t_start_ && walking_tick_ < t_start_real_)
    //                         lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,lfoot_support_init_.translation()(2),0.0,0.0,0.0);
    //                     else
    //                         lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_,t_start_real_+t_double1_,0.0,0.0,0.0,0.0);
    //                 }
    //             }
    //             lfoot_trajectory_euler_support_ = lfoot_support_euler_init_;
    //             for(int i=0; i<2; i++)
    //                 lfoot_trajectory_euler_support_(i) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,lfoot_support_euler_init_(i),0.0,0.0,0.0);

    //             lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));


    //             rfoot_trajectory_support_.translation() = rfoot_support_init_.translation();
    //             rfoot_trajectory_dot_support_.setZero();

    //             if(foot_step_(current_step_num_,6) == 0) //right foot support
    //                 rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,rfoot_support_init_.translation()(2),0.0,0.0,0.0);
    //             else // swing foot (left foot support)
    //             {
    //                 if(current_step_num_ == 0)
    //                     rfoot_trajectory_support_.translation()(2) = rfoot_support_init_.translation()(2);
    //                 else
    //                 {
    //                     if(walking_tick_ < t_start_)
    //                         rfoot_trajectory_support_.translation()(2) = rfoot_support_init_.translation()(2);
    //                     else if(walking_tick_ >= t_start_ && walking_tick_ < t_start_real_)
    //                         rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,rfoot_support_init_.translation()(2),0.0,0.0,0.0);
    //                     else
    //                         rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_,t_start_real_+t_double1_,0.0,0.0,0.0,0.0);
    //                 }
    //             }
    //             rfoot_trajectory_euler_support_ = rfoot_support_euler_init_;

    //             for(int i=0; i<2; i++)
    //                 rfoot_trajectory_euler_support_(i) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,rfoot_support_euler_init_(i),0.0,0.0,0.0);

    //             rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));
    //         }
    //         else
    //         {
    //             lfoot_trajectory_support_.translation() = lfoot_support_init_.translation();
    //             lfoot_trajectory_dot_support_.setZero();


    //             if(foot_step_(current_step_num_,6) == 1) //left foot support
    //                 lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,lfoot_support_init_.translation()(2),0.0,0.0,0.0);
    //             else // swing foot (right foot support)
    //             {
    //                 if(current_step_num_ == 0)
    //                     lfoot_trajectory_support_.translation()(2) = lfoot_support_init_.translation()(2);
    //                 else
    //                 {
    //                     if (int(current_step_num_) % 2 > 0)
    //                     {
    //                         lfoot_support_init_.translation()(0) = -0.2;
    //                         lfoot_support_init_.translation()(1) = 0.255;
    //                     }
    //                     if(walking_tick_ < t_start_)
    //                         lfoot_trajectory_support_.translation()(2) = lfoot_support_init_.translation()(2);
    //                     else if(walking_tick_ >= t_start_ && walking_tick_ < t_start_real_)
    //                         lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,lfoot_support_init_.translation()(2),0.0,0.0,0.0);
    //                     else
    //                         lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_,t_start_real_+t_double1_,0.0,0.0,0.0,0.0);
    //                 }
    //             }
    //             lfoot_trajectory_euler_support_ = lfoot_support_euler_init_;
    //             for(int i=0; i<2; i++)
    //                 lfoot_trajectory_euler_support_(i) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,lfoot_support_euler_init_(i),0.0,0.0,0.0);

    //             lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));


    //             rfoot_trajectory_support_.translation() = rfoot_support_init_.translation();
    //             rfoot_trajectory_dot_support_.setZero();

    //             if(foot_step_(current_step_num_,6) == 0) //right foot support
    //                 rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,rfoot_support_init_.translation()(2),0.0,0.0,0.0);
    //             else // swing foot (left foot support)
    //             {
    //                 if(current_step_num_ == 0)
    //                 {
    //                     rfoot_trajectory_support_.translation()(2) = rfoot_support_init_.translation()(2);
    //                 }
    //                 else
    //                 {
    //                     if (int(current_step_num_) % 2 == 0)
    //                     {
    //                         rfoot_support_init_.translation()(0) = -0.2;
    //                         rfoot_support_init_.translation()(1) = -0.255;
    //                     }
    //                     if(walking_tick_ < t_start_)
    //                         rfoot_trajectory_support_.translation()(2) = rfoot_support_init_.translation()(2);
    //                     else if(walking_tick_ >= t_start_ && walking_tick_ < t_start_real_)
    //                         rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,rfoot_support_init_.translation()(2),0.0,0.0,0.0);
    //                     else
    //                         rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_,t_start_real_+t_double1_,0.0,0.0,0.0,0.0);
    //                 }
    //             }
    //             rfoot_trajectory_euler_support_ = rfoot_support_euler_init_;

    //             for(int i=0; i<2; i++)
    //                 rfoot_trajectory_euler_support_(i) = DyrosMath::cubic(walking_tick_,t_start_,t_start_real_,rfoot_support_euler_init_(i),0.0,0.0,0.0);

    //             rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));
    //         }
    //         // std::cout<<rfoot_support_init_.translation()<<std::endl;
    //     }
    //     else if(walking_tick_ >= t_start_real_+t_double1_ && walking_tick_ < t_start_+t_total_-t_double2_-t_rest_last_)
    //     {
    //         double t_rest_temp = 0.05*hz_;

    //         double ankle_temp;
    //         ankle_temp = 0*DEG2RAD;

    //         if(foot_step_(current_step_num_,6) == 1) //Left foot support : Left foot is fixed at initial values, and Right foot is set to go target position
    //         {
    //             lfoot_trajectory_support_.translation() = lfoot_support_init_.translation();
    //             lfoot_trajectory_euler_support_ = lfoot_support_euler_init_;
    //             lfoot_trajectory_euler_support_.setZero();

    //             lfoot_trajectory_dot_support_.setZero();
    //             lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));

    //             if(walking_tick_ < t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0) // the period for lifting the right foot
    //             {
    //                 rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+t_rest_temp,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,0,foot_height_,0.0,0.0);
    //                 rfoot_trajectory_dot_support_(2) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+t_rest_temp,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,0,foot_height_,0.0,0.0,hz_);

    //                 rfoot_trajectory_euler_support_(1) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+t_rest_temp,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,0.0,ankle_temp,0.0,0.0);
    //                 rfoot_trajectory_dot_support_(4) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+t_rest_temp,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,0.0,ankle_temp,0.0,0.0,hz_);
    //             } // the period for lifting the right foot
    //             else
    //             {
    //                 rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-t_rest_temp,foot_height_,target_swing_foot(2),0.0,0.0);
    //                 rfoot_trajectory_dot_support_(2) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-t_rest_temp,foot_height_,target_swing_foot(2),0.0,0.0,hz_);

    //                 rfoot_trajectory_euler_support_(1) = DyrosMath::cubic(walking_tick_,t_start_+t_total_-t_rest_last_-t_double2_-t_rest_temp,t_start_+t_total_-t_rest_last_,ankle_temp,0.0,0.0,0.0);
    //                 rfoot_trajectory_dot_support_(4) = DyrosMath::cubicDot(walking_tick_,t_start_+t_total_-t_rest_last_-t_double2_-t_rest_temp,t_start_+t_total_-t_rest_last_,ankle_temp,0.0,0.0,0.0,hz_);
    //             } // the period for putting the right foot

    //             rfoot_trajectory_euler_support_(0) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_,0.0,target_swing_foot(0+3),0.0,0.0);
    //             rfoot_trajectory_dot_support_(0+3) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_,0.0,target_swing_foot(0+3),0.0,0.0,hz_);

    //             for(int i=0; i<1; i++)
    //             {
    //                 if (int(current_step_num_) % 2 > 0)
    //                 {
    //                     rfoot_support_init_.translation()(0) = -0.2;
    //                 }
    //                 rfoot_trajectory_support_.translation()(i) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+2*t_rest_temp,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-2*t_rest_temp,rfoot_support_init_.translation()(i),target_swing_foot(i),0.0,0.0);
    //                 rfoot_trajectory_dot_support_(i) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+2*t_rest_temp,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-2*t_rest_temp,rfoot_support_init_.translation()(i),target_swing_foot(i),0.0,0.0,hz_);
    //             }
    //             //TODO:
    //             //ADDED:
    //             rfoot_trajectory_support_.translation()(1) = target_swing_foot(1);
    //             rfoot_trajectory_dot_support_(1) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+2*t_rest_temp,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-2*t_rest_temp,rfoot_support_init_.translation()(1),target_swing_foot(1),0.0,0.0,hz_);


    //             rfoot_trajectory_euler_support_(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_,rfoot_support_euler_init_(2),target_swing_foot(5),0.0,0.0);
    //             rfoot_trajectory_dot_support_(5) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_,rfoot_support_euler_init_(2),target_swing_foot(5),0.0,0.0,hz_);

    //             rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));
    //         }

    //         else if(foot_step_(current_step_num_,6) == 0) // Right foot support : Right foot is fixed at initial values, and Left foot is set to go target position
    //         {
    //             rfoot_trajectory_support_.translation() = rfoot_support_init_.translation();
    //             rfoot_trajectory_support_.translation()(2) = 0.0;
    //             rfoot_trajectory_euler_support_ = rfoot_support_euler_init_;
    //             rfoot_trajectory_euler_support_(0) = 0.0;
    //             rfoot_trajectory_euler_support_(1) = 0.0;
    //             rfoot_trajectory_dot_support_.setZero();

    //             double ankle_temp;
    //             ankle_temp = 0*DEG2RAD;

    //             rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));

    //             if(walking_tick_ < t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0)
    //             {

    //                 lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+t_rest_temp,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,0,foot_height_,0.0,0.0);
    //                 lfoot_trajectory_dot_support_(2) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+t_rest_temp,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,0,foot_height_,0.0,0.0,hz_);

    //                 lfoot_trajectory_euler_support_(1) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+t_rest_temp,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,0.0,ankle_temp,0.0,0.0);
    //                 lfoot_trajectory_dot_support_(4) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+t_rest_temp,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,0.0,ankle_temp,0.0,0.0,hz_);

    //             }
    //             else
    //             {
    //                 lfoot_trajectory_euler_support_(1) = DyrosMath::cubic(walking_tick_,t_start_+t_total_-t_rest_last_-t_double2_-t_rest_temp,t_start_+t_total_-t_rest_last_,ankle_temp,0.0,0.0,0.0);
    //                 lfoot_trajectory_dot_support_(4) = DyrosMath::cubicDot(walking_tick_,t_start_+t_total_-t_rest_last_-t_double2_-t_rest_temp,t_start_+t_total_-t_rest_last_,ankle_temp,0.0,0.0,0.0,hz_);


    //                 lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-t_rest_temp,foot_height_,target_swing_foot(2),0.0,0.0);
    //                 lfoot_trajectory_dot_support_(2) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_-t_imp_)/2.0,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-t_rest_temp,foot_height_,target_swing_foot(2),0.0,0.0,hz_);
    //             }

    //             lfoot_trajectory_euler_support_(0) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_,0.0,target_swing_foot(0+3),0.0,0.0);
    //             lfoot_trajectory_dot_support_(0+3) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_,0.0,target_swing_foot(0+3),0.0,0.0,hz_);

    //             for(int i=0; i<1; i++)
    //             {
    //                 if (int(current_step_num_) % 2 > 0)
    //                 {
    //                     lfoot_support_init_.translation()(0) = -0.2;
    //                 }
    //                 lfoot_trajectory_support_.translation()(i) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+2*t_rest_temp,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-2*t_rest_temp,lfoot_support_init_.translation()(i),target_swing_foot(i),0.0,0.0);
    //                 lfoot_trajectory_dot_support_(i) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+2*t_rest_temp,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-2*t_rest_temp,lfoot_support_init_.translation()(i),target_swing_foot(i),0.0,0.0,hz_);
    //             }
    //             //TODO:
    //             //ADDED:
    //             lfoot_trajectory_support_.translation()(1) = target_swing_foot(1);
    //             lfoot_trajectory_dot_support_(1) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_+2*t_rest_temp,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_-2*t_rest_temp,lfoot_support_init_.translation()(1),target_swing_foot(1),0.0,0.0,hz_);


    //             lfoot_trajectory_euler_support_(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_,lfoot_support_euler_init_(2),target_swing_foot(5),0.0,0.0);
    //             lfoot_trajectory_dot_support_(5) = DyrosMath::cubicDot(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_-t_imp_,lfoot_support_euler_init_(2),target_swing_foot(5),0.0,0.0,hz_);

    //             lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));
    //         }
    //         else
    //         {
    //             lfoot_trajectory_support_.translation() = lfoot_support_init_.translation();
    //             lfoot_trajectory_support_.linear() = lfoot_support_init_.linear();
    //             lfoot_trajectory_euler_support_ = lfoot_support_euler_init_;
    //             lfoot_trajectory_dot_support_.setZero();

    //             rfoot_trajectory_support_.translation() = rfoot_support_init_.translation();
    //             rfoot_trajectory_support_.linear() = rfoot_support_init_.linear();
    //             rfoot_trajectory_euler_support_ = rfoot_support_euler_init_;
    //             rfoot_trajectory_dot_support_.setZero();
    //         }
    //     }
    //     else
    //     {
    //         if(foot_step_(current_step_num_,6) == 1)
    //         {
    //             lfoot_trajectory_support_.translation() = lfoot_support_init_.translation();
    //             lfoot_trajectory_support_.translation()(2) = 0.0;
    //             lfoot_trajectory_euler_support_ = lfoot_support_euler_init_;
    //             lfoot_trajectory_euler_support_(0) = 0.0;
    //             lfoot_trajectory_euler_support_(1) = 0.0;
    //             lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));
    //             lfoot_trajectory_dot_support_.setZero();

    //             for(int i=0; i<3; i++)
    //             {
    //                 rfoot_trajectory_support_.translation()(i) = target_swing_foot(i);
    //                 rfoot_trajectory_euler_support_(i) = target_swing_foot(i+3);
    //             }
    //             rfoot_trajectory_dot_support_.setZero();

    //             rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));
    //         }
    //         else if (foot_step_(current_step_num_,6) == 0)
    //         {
    //             rfoot_trajectory_support_.translation() = rfoot_support_init_.translation();
    //             rfoot_trajectory_support_.translation()(2) = 0.0;
    //             rfoot_trajectory_euler_support_ = rfoot_support_euler_init_;
    //             rfoot_trajectory_euler_support_(0) = 0.0;
    //             rfoot_trajectory_euler_support_(1) = 0.0;
    //             rfoot_trajectory_dot_support_.setZero();

    //             rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));


    //             for(int i=0; i<3; i++)
    //             {
    //                 lfoot_trajectory_support_.translation()(i) = target_swing_foot(i);
    //                 lfoot_trajectory_euler_support_(i) = target_swing_foot(i+3);
    //             }
    //             lfoot_trajectory_dot_support_.setZero();
    //             lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));
    //         }
    //         else
    //         {
    //             lfoot_trajectory_support_.translation() = lfoot_support_init_.translation();
    //             lfoot_trajectory_support_.linear() = lfoot_support_init_.linear();
    //             lfoot_trajectory_euler_support_ = lfoot_support_euler_init_;
    //             lfoot_trajectory_dot_support_.setZero();

    //             rfoot_trajectory_support_.translation() = rfoot_support_init_.translation();
    //             rfoot_trajectory_support_.linear() = rfoot_support_init_.linear();
    //             rfoot_trajectory_euler_support_ = rfoot_support_euler_init_;
    //             rfoot_trajectory_dot_support_.setZero();
    //         }
    //     }

    //     // Foot_Graph << lfoot_trajectory_support_.translation()(0) << "," 
    //     //            << lfoot_trajectory_support_.translation()(1) << "," 
    //     //            << lfoot_trajectory_support_.translation()(2) << "," 
    //     //            << rfoot_trajectory_support_.translation()(0) << "," 
    //     //            << rfoot_trajectory_support_.translation()(1) << "," 
    //     //            << rfoot_trajectory_support_.translation()(2) << endl;
    // }



    void WalkingController::getFootTrajectory()
    {
        Eigen::Vector6d target_swing_foot;

        for(int i=0; i<6; i++)
        { target_swing_foot(i) = foot_step_support_frame_(current_step_num_,i); }
        
        if(walking_tick_ < t_start_ + t_rest_init_ + t_double1_) 
        {  
            if(foot_step_(current_step_num_,6) == 1)  
            { 
            lfoot_trajectory_support_.translation().setZero();
            lfoot_trajectory_euler_support_.setZero();

            rfoot_trajectory_support_.translation() = rfoot_support_init_.translation();
            rfoot_trajectory_support_.translation()(2) = 0;
            rfoot_trajectory_euler_support_ = rfoot_support_euler_init_;
            }     
            else if(foot_step_(current_step_num_,6) == 0)  
            { 
            rfoot_trajectory_support_.translation().setZero();
            rfoot_trajectory_euler_support_.setZero();

            lfoot_trajectory_support_.translation() = lfoot_support_init_.translation();
            lfoot_trajectory_support_.translation()(2) = 0;
            lfoot_trajectory_euler_support_ = lfoot_support_euler_init_; 
            }     

            lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));
            rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));
        }
        
        else if(walking_tick_ >= t_start_ + t_rest_init_ + t_double1_ && walking_tick_ < t_start_ + t_total_ - t_double2_ - t_rest_last_)  
        {   
            if(foot_step_(current_step_num_,6) == 1) 
            {
            lfoot_trajectory_support_.translation() = lfoot_support_init_.translation();             
            lfoot_trajectory_euler_support_.setZero(); 

            lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));
            
            if(walking_tick_ < t_start_ + t_rest_init_ + t_double1_ + (t_total_ - t_rest_init_ - t_rest_last_ - t_double1_ - t_double2_)/2.0) 
            { rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_+ t_rest_init_ + t_double1_,t_start_real_ + t_double1_ + (t_total_ - t_rest_init_ - t_rest_last_ - t_double1_ - t_double2_)/2.0,0,foot_height_,0.0,0.0); }  
            else
            { rfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_)/2.0,t_start_+t_total_-t_rest_last_-t_double2_,foot_height_,target_swing_foot(2),0.0,0.0); }
            
            for(int i=0; i<2; i++)  
            { rfoot_trajectory_support_.translation()(i) = DyrosMath::cubic(walking_tick_,t_start_real_ + t_double1_ , t_start_+t_total_-t_rest_last_-t_double2_, rfoot_support_init_.translation()(i),target_swing_foot(i),0.0,0.0); } 
            
            rfoot_trajectory_euler_support_(0) = 0;
            rfoot_trajectory_euler_support_(1) = 0;
            rfoot_trajectory_euler_support_(2) = DyrosMath::cubic(walking_tick_,t_start_ + t_rest_init_ + t_double1_,t_start_ + t_total_ - t_rest_last_ - t_double2_,rfoot_support_euler_init_(2),target_swing_foot(5),0.0,0.0);
            rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));
            }
            else if(foot_step_(current_step_num_,6) == 0) 
            { 
            rfoot_trajectory_support_.translation() = rfoot_support_init_.translation(); 
            rfoot_trajectory_euler_support_.setZero(); 

            rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));
        
            if(walking_tick_ < t_start_ + t_rest_init_ + t_double1_ + (t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_)/2.0)
            { lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_)/2.0,0,foot_height_,0.0,0.0); }
            else
            { lfoot_trajectory_support_.translation()(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_+(t_total_-t_rest_init_-t_rest_last_-t_double1_-t_double2_)/2.0,t_start_+t_total_-t_rest_last_-t_double2_,foot_height_,target_swing_foot(2),0.0,0.0); }
                
            for(int i=0; i<2; i++)
            { lfoot_trajectory_support_.translation()(i) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_,lfoot_support_init_.translation()(i),target_swing_foot(i),0.0,0.0); }

            lfoot_trajectory_euler_support_(0) = 0;
            lfoot_trajectory_euler_support_(1) = 0;  
            lfoot_trajectory_euler_support_(2) = DyrosMath::cubic(walking_tick_,t_start_real_+t_double1_,t_start_+t_total_-t_rest_last_-t_double2_,lfoot_support_euler_init_(2),target_swing_foot(5),0.0,0.0);
            lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));
            } 
        }
        else 
        { 
            if(foot_step_(current_step_num_,6) == 1) 
            {
            lfoot_trajectory_euler_support_.setZero();
            lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));
            
            for(int i=0; i<3; i++)
            {
                rfoot_trajectory_support_.translation()(i) = target_swing_foot(i);
                rfoot_trajectory_euler_support_(i) = target_swing_foot(i+3);
            }
            rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));
            }
            else if (foot_step_(current_step_num_,6) == 0) 
            {
            rfoot_trajectory_euler_support_.setZero();
            rfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(rfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(rfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(rfoot_trajectory_euler_support_(0));

            for(int i=0; i<3; i++)
            {
                lfoot_trajectory_support_.translation()(i) = target_swing_foot(i);
                lfoot_trajectory_euler_support_(i) = target_swing_foot(i+3);
            }
            lfoot_trajectory_support_.linear() = DyrosMath::rotateWithZ(lfoot_trajectory_euler_support_(2))*DyrosMath::rotateWithY(lfoot_trajectory_euler_support_(1))*DyrosMath::rotateWithX(lfoot_trajectory_euler_support_(0));
            }
        }
    }

    void WalkingController::getPelvTrajectory()
    {
        pelv_trajectory_support_.setIdentity();
        pelv_trajectory_support_.translation()(0) = pelv_support_current_.translation()(0) + 1.0*(com_desired_(0) - com_support_current_(0));
        pelv_trajectory_support_.translation()(1) = pelv_support_current_.translation()(1) + 1.0*(com_desired_(1) - com_support_current_(1));
        pelv_trajectory_support_.translation()(2) = com_desired_(2);         
    } 
}