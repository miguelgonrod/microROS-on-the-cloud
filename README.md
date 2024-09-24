# microROS-on-the-cloud

## Table of contents
* [Description](#description)
* [Demostration](#demostration)
* [Technologies](#technologies)
* [Configure Container](#configure-container)
* [Flash Esp32-cam](#flash-esp32-cam)
* [Run](#run)
* [Licence](#licence)


## Description
This project showcases the use of an ESP32-CAM with micro-ROS and an OLED screen to capture an image of a hand. The captured image is encapsulated in a custom micro-ROS message and sent to Huawei Cloud, where a Docker container running ROS2 Humble analyzes it using OpenCV and MediaPipe to identify whether the hand is showing rock, paper, or scissors. The result is then sent back to the ESP32 to play the corresponding game. The main objective of the project is to demonstrate how micro-ROS can be integrated with embedded systems to reduce cost and energy consumption, while leveraging cloud connectivity to enable these low-computation devices to use complex and heavy AI models.

## Demostration

https://github.com/user-attachments/assets/f711379f-cfff-406f-838a-5009e789d02f

## Technologies
This project was created with:
* Python: 3.12.3
* OpenCV
* Mediapipe
* ROS 2: Humble
* Micro-ROS: esp32-cam
* Arduino C++
* Docker
* Huawei Cloud with Huawei cloud EulerOS 2.0


## Configure Container
To run the container you have to make sure that you have docker installed on your system, to check that you can run `docker --version`, if you don't have docker installed you can follow this guide for ubuntu: https://docs.docker.com/engine/install/ubuntu/ or if you are using Huawei Cloud EulerOS you can run `dnf install docker`.

To run the container you have to first clone this repository and execute the run script:
```
$ git clone https://github.com/miguelgonrod/microROS-on-the-cloud
$ cd microROS-on-the-cloud
$ ./run.sh
```

If you have this system on the cloud, and for any reason it isn't a debian based distribution it is possible that it will pop up an error related to uid or gid, to solve this problem you just have to create an user and a group with uid and gid 1000.

After the container have initialized you need to run the configure script to enable micro-ROS and ROS humble workspaces:
```
$ ./configure.sh
```

## Flash Esp32-cam
To flash you Esp32-cam you must have Visual Studio Code installed with docker extension. Now you have to run the container specifying the `--flash` flag with your respective `/dev/ttyUSB#` port:
```
$ ./run.sh --flash /dev/ttyUSB0
```

To check wich is your /dev/ttyUSB# you can use `ls /dev/ttyUSB*`. One of the most common problems with flashing Esp32 is that you don't have permissions to do this, to check if this is your case you can run `groups`, if you are on dialout group you are ok, in case you don't run this command and reboot your system.:
```
$ sudo usermod -aG dialout ${USER}
$ newgrp dialout
```

Now that you have running your container, using the docker extension connect to this container and install platformio extension. After platformio is installed open the project folder located in microros_ws/src/microROS_messages and wait for platformio to install the dependencies required.

After all this process is finished you have to modify some parameters on microROS_messages/lib/microROS/microROS.cpp. First change in line 48 the ip address for your local ip address or your cloud public ip, next in line 50 modify the value for your wifi SSID (wifi name), and in line 51 for your wifi password.

After the parameters are specified you can press this button to flash the esp32-cam:
![vscode](https://github.com/miguelgonrod/OpenCV-microRos-ledController/assets/49737722/691014fe-b4bf-4477-9031-df654b96beb3)

If platformio isn't locating the custom messages (sensor_micro_msgs) you have to run this commands on platformio terminal:
```
$ pio run --target clean_microros
$ pio lib install
$ pio run
```

## Run
To run the microROS-agent and ROS 2 nodes you have to follow this steps.
First if you haven't, run the container, it doesn't matter if it is with or without `--flash` flag, and preferably use `termux` in the terminal.
After termux is running, in the first terminal use this commands to run microROS-agent:
```
$ cd microros_ws
$ source install/setup.bash
$ ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
```

Now open a new terminal using `ctrl + b c`, and in this terminal run:
```
$ cd ros2_ws
$ source install/setup.bash
$ ros2 run esp32_camera_subscriber sign_recognition
```

Also if you want to check if the topics are enable you can run in another terminal:
```
$ cd ros2_ws
$ source install/setup.bash
$ ros2 topic list
```

## Licence
microROS-on-the-cloud is available under the BSD-3-Clause license. See the LICENSE file for more details.
