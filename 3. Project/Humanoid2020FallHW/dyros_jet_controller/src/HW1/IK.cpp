#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/walking_controller_hw.h"
#include "cvxgen_6_8_0/cvxgen/solver.h"
#include <fstream>
#include <tf/tf.h>

namespace dyros_jet_controller
{ 

    ofstream csv_data("/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/motion_data.csv");

    void WalkingController::computeIkControl( Eigen::Isometry3d float_trunk_transform,
                                            Eigen::Isometry3d float_lleg_transform,
                                            Eigen::Isometry3d float_rleg_transform,
                                            Eigen::Vector12d& desired_leg_q)
    {
        double offset_hip_pitch = 24.0799945102*DEG2RAD;
        double offset_knee_pitch = 14.8197729791*DEG2RAD;
        double offset_ankle_pitch = 9.2602215311*DEG2RAD;

        Eigen::Vector3d R_r, R_D, L_r, L_D ;

        L_D << 0 , +0.105, -0.1119;
        R_D << 0 , -0.105, -0.1119;

        L_r = float_lleg_transform.rotation().transpose() * (float_trunk_transform.translation() + float_trunk_transform.rotation()*L_D - float_lleg_transform.translation());
        R_r = float_rleg_transform.rotation().transpose() * (float_trunk_transform.translation() + float_trunk_transform.rotation()*R_D - float_rleg_transform.translation());

        double R_C = 0, L_C = 0, L_upper = 0.3713, L_lower = 0.3728 , R_alpha = 0, L_alpha = 0;

        L_C = sqrt( pow(L_r(0),2) + pow(L_r(1),2) + pow(L_r(2),2) );
        R_C = sqrt( pow(R_r(0),2) + pow(R_r(1),2) + pow(R_r(2),2) );

        q_des(3) = (-acos((pow(L_upper,2) + pow(L_lower,2) - pow(L_C,2)) / (2*L_upper*L_lower))+ M_PI) ;
        q_des(9) = (-acos((pow(L_upper,2) + pow(L_lower,2) - pow(R_C,2)) / (2*L_upper*L_lower))+ M_PI) ;
        L_alpha = asin(L_upper / L_C * sin(M_PI - q_des(3)));
        R_alpha = asin(L_upper / R_C * sin(M_PI - q_des(9)));

        q_des(4)  = -atan2(L_r(0), sqrt(pow(L_r(1),2) + pow(L_r(2),2))) - L_alpha ;
        q_des(10) = -atan2(R_r(0), sqrt(pow(R_r(1),2) + pow(R_r(2),2))) - R_alpha ;

        Eigen::Matrix3d R_Knee_Ankle_Y_rot_mat, L_Knee_Ankle_Y_rot_mat;
        Eigen::Matrix3d R_Ankle_X_rot_mat, L_Ankle_X_rot_mat;
        Eigen::Matrix3d R_Hip_rot_mat, L_Hip_rot_mat;

        L_Knee_Ankle_Y_rot_mat = DyrosMath::rotateWithY(-q_des(3)-q_des(4));
        L_Ankle_X_rot_mat = DyrosMath::rotateWithX(-q_des(5));
        R_Knee_Ankle_Y_rot_mat = DyrosMath::rotateWithY(-q_des(9)-q_des(10));
        R_Ankle_X_rot_mat = DyrosMath::rotateWithX(-q_des(11));

        L_Hip_rot_mat.setZero(); R_Hip_rot_mat.setZero();

        L_Hip_rot_mat = float_trunk_transform.rotation().transpose() * float_lleg_transform.rotation() * L_Ankle_X_rot_mat * L_Knee_Ankle_Y_rot_mat;
        R_Hip_rot_mat = float_trunk_transform.rotation().transpose() * float_rleg_transform.rotation() * R_Ankle_X_rot_mat * R_Knee_Ankle_Y_rot_mat;

        q_des(0) = -atan2(-L_Hip_rot_mat(0,1),L_Hip_rot_mat(1,1)); // Hip yaw
        q_des(1) =  atan2(L_Hip_rot_mat(2,1), -L_Hip_rot_mat(0,1) * sin(q_des(0)) + L_Hip_rot_mat(1,1)*cos(q_des(0))); // Hip roll
        q_des(2) =  atan2(-L_Hip_rot_mat(2,0), L_Hip_rot_mat(2,2)) + offset_hip_pitch; // Hip pitch
        q_des(3) =  q_des(3) - 14.8197729791*DEG2RAD; // Knee pitch
        q_des(4) =  q_des(4) - 9.2602215311*DEG2RAD; // Ankle pitch
        q_des(5) =  atan2( L_r(1), L_r(2) ); // Ankle roll

        q_des(6) = -atan2(-R_Hip_rot_mat(0,1),R_Hip_rot_mat(1,1));
        q_des(7) =  atan2(R_Hip_rot_mat(2,1), -R_Hip_rot_mat(0,1) * sin(q_des(6)) + R_Hip_rot_mat(1,1)*cos(q_des(6)));
        q_des(8) = -atan2(-R_Hip_rot_mat(2,0), R_Hip_rot_mat(2,2)) - offset_hip_pitch;
        q_des(9) = -q_des(9) + 14.8197729791*DEG2RAD;
        q_des(10) = -q_des(10) + 9.2602215311*DEG2RAD;
        q_des(11) =  atan2( R_r(1), R_r(2) );

    }

    void WalkingController::circling_motion()
    {
        pelv_trajectory_float_.translation().setZero();
        pelv_trajectory_float_.linear().setIdentity();

        rfoot_trajectory_float_.translation()(0) = -0.05 * cos(0.5*M_PI*walking_tick_/hz_);
        rfoot_trajectory_float_.translation()(1) = -0.12782;
        rfoot_trajectory_float_.translation()(2) = -0.76548 + 0.05 * sin(0.5*M_PI*walking_tick_/hz_);

        lfoot_trajectory_float_.translation()(0) = -0.05 * cos(0.5*M_PI*(walking_tick_/hz_ - 1.0));
        lfoot_trajectory_float_.translation()(1) =  0.12782;
        lfoot_trajectory_float_.translation()(2) = -0.76548 + 0.05 * sin(0.5*M_PI*(walking_tick_/hz_ - 1.0));

        lfoot_trajectory_float_.linear().setIdentity();
        rfoot_trajectory_float_.linear().setIdentity();
    }

}