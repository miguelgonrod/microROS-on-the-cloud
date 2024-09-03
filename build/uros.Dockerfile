FROM osrf/ros:humble-desktop-full

RUN apt-get update && \
    apt-get install -y python3 python3-pip python3-venv && \
    apt-get install -y nano && \
    apt-get install -y tmux && \
    apt-get install -y net-tools

RUN useradd -m -s /bin/bash -N -u 1000 robot && \
    echo "robot ALL=(ALL) NOPASSWD: ALL" > /etc/sudoers && \
    chmod 0440 /etc/sudoers && \
    chmod g+w /etc/passwd && \
    usermod -aG dialout robot

USER robot

WORKDIR /home/robot/app

COPY --chown=robot app/ .

RUN chmod 774 ~/app/robot_ws/

WORKDIR /home/robot/app/robot_ws

RUN /bin/bash -c "source /opt/ros/humble/setup.bash;"

RUN /bin/bash -c "rosdep update;"

#RUN /bin/bash -c "rosdep install --from-paths src --ignore-src -y;"

#RUN /bin/bash -c "source ~/app/robot_ws/install/setup.bash;"

#RUN /bin/bash -c "ros2 run micro_ros_setup build_firmware.sh;"

#RUN /bin/bash -c "ros2 run micro_ros_setup build_agent.sh;"


