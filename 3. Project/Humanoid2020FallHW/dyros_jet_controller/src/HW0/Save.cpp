#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/dyros_jet_model.h"
#include "dyros_jet_controller/walking_controller_hw.h"
#include "cvxgen_6_8_0/cvxgen/solver.h"
#include <fstream>
#include <tf/tf.h>

namespace dyros_jet_controller
{ 
    ofstream ZMP_Graph("/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/ZMP_graph.csv");
    ofstream com_data("/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/com_data.csv");
    ofstream Foot_Graph("/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/Foot_graph.csv");
    ofstream Foot_Traj_Graph("/home/robot/humanoid_ws/src/Humanoid2020FallHW/data/Foot_Traj_Float_.csv");

    void WalkingController::save_data()
    {
        if(current_step_num_ == 0)
        { ZMP_Graph << ref_zmp_(walking_tick_,0) << "," << ref_zmp_(walking_tick_,1)  <<","<<current_step_num_<< endl; }
        else
        { ZMP_Graph << ref_zmp_(walking_tick_ - t_start_, 0) + current_step_num_*0 << "," << ref_zmp_(walking_tick_ - t_start_,1)  <<","<<current_step_num_<< endl; }
        if(current_step_num_ == 0)
        { com_data << ref_zmp_(walking_tick_,0) << "," << ref_zmp_(walking_tick_,1) << "," << ref_com_(walking_tick_,0) << "," << ref_com_(walking_tick_,1) << endl; }
        else
        { com_data << ref_zmp_(walking_tick_ - t_start_, 0) << "," << ref_zmp_(walking_tick_ - t_start_,1) << "," << ref_com_(walking_tick_ - t_start_, 0) << "," << ref_com_(walking_tick_ - t_start_,1) << endl; }
        
        Foot_Graph << lfoot_trajectory_support_.translation()(0) << "," 
                   << lfoot_trajectory_support_.translation()(1) << "," 
                   << lfoot_trajectory_support_.translation()(2) << "," 
                   << rfoot_trajectory_support_.translation()(0) << "," 
                   << rfoot_trajectory_support_.translation()(1) << "," 
                   << rfoot_trajectory_support_.translation()(2) << endl;
        Foot_Traj_Graph << lfoot_trajectory_float_.translation()(0) << "," 
                        << lfoot_trajectory_float_.translation()(1) << "," 
                        << lfoot_trajectory_float_.translation()(2) << "," 
                        << rfoot_trajectory_float_.translation()(0) << "," 
                        << rfoot_trajectory_float_.translation()(1) << "," 
                        << rfoot_trajectory_float_.translation()(2) << endl;
    }

}