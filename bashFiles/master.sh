#!/bin/bash
source ~/.bashrc
cd
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/roscore.sh
sleep 0.5
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/world.sh
sleep 2
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/prop.sh
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/servo.sh
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/remap.sh
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/razor.sh
#gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/imu_gazebo.sh
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/range.sh
sleep 0.5
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/rviz.sh
sleep 2
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/control.sh
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/keyboard.sh
sleep 0.5
gnome-terminal -e ~/catkin_ws/src/boat/bashFiles/robot_pose_ekf.sh