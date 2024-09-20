#!/bin/bash

# Habilitar acceso gráfico local
xhost +local:docker 1> /dev/null

# Construir la imagen de Docker
docker build -f build/uros.Dockerfile -t microrosimage .

# Verificar si la opción --flash fue proporcionada
if [[ "$1" == "--flash" ]]; then
    # Verificar si se ha especificado el dispositivo /dev/ttyUSB
    if [[ -z "$2" ]]; then
        echo "Error: Debes especificar el dispositivo /dev/ttyUSB a utilizar."
        echo "Uso: $0 --flash /dev/ttyUSBx"
        exit 1
    fi

    # Ejecutar el contenedor con el dispositivo especificado
    docker run -it \
        -e DISPLAY=$DISPLAY \
        -v /tmp/.X11-unix:/tmp/.X11-unix \
        -v $HOME/.Xauthority:/root/.Xauthority \
        --network host \
        --mount src="./app",target="/home/robot/app",type=bind \
        --device=$2:$2 \
        microrosimage:latest

else
    # Ejecutar el contenedor sin el dispositivo
    docker run -it \
        -e DISPLAY=$DISPLAY \
        -v /tmp/.X11-unix:/tmp/.X11-unix \
        -v $HOME/.Xauthority:/root/.Xauthority \
        --network host \
        --mount src="./app",target="/home/robot/app",type=bind \
        microrosimage:latest
fi
