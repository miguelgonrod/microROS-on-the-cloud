#!/bin/bash

xhost +local:docker 1> /dev/null

docker build -f build/uros.Dockerfile -t microrosimage .

if [[ "$1" == "--flash" ]]; then

	docker run -it \
		-e DISPLAY=$DISPLAY \
			-v /tmp/.X11-unix:/tmp/.X11-unix \
			-v $HOME/.Xauthority:/root/.Xauthority \
		--network host \
		--mount src="./app",target="/home/robot/app",type=bind \
		--device=/dev/ttyUSB0:/dev/ttyUSB0 \
		microrosimage:latest

else
	docker run -it \
		-e DISPLAY=$DISPLAY \
			-v /tmp/.X11-unix:/tmp/.X11-unix \
			-v $HOME/.Xauthority:/root/.Xauthority \
		--network host \
		--mount src="./app",target="/home/robot/app",type=bind \
		microrosimage:latest
fi
