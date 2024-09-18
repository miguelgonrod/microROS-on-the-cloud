#!/bin/bash

source /opt/ros/humble/setup.bash
cd /home/robot/app/ros2_ws
colcon build

cd /home/robot/app/microros_ws
rosdep install --from-paths src --ignore-src -y
colcon build
source install/local_setup.bash
ros2 run micro_ros_setup create_firmware_ws.sh freertos esp32
cp -r /home/robot/app/microros_ws/src/microROS_messages/extra_packages/sensor_micro_msgs /home/robot/app/microros_ws/firmware/mcu_ws

cd /home/robot/app/microros_ws
ros2 run micro_ros_setup configure_firmware.sh int32_publisher -t serial
ros2 run micro_ros_setup build_firmware.sh

ros2 run micro_ros_setup create_agent_ws.sh
ros2 run micro_ros_setup build_agent.sh
source install/local_setup.bash

rm -rf /home/robot/app/configure.sh