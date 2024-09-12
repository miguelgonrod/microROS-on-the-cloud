#ifndef MICROROS_H
#define MICROROS_H

#include <Arduino.h>
#include <micro_ros_platformio.h>
#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <sensor_micro_msgs/msg/compressed_image.h>
#include <std_msgs/msg/u_int8.h>
#include <esp_camera.h>
#include <micro_ros_utilities/string_utilities.h>

#define CAM_PIN_PWDN 32
#define CAM_PIN_RESET -1
#define CAM_PIN_XCLK 0
#define CAM_PIN_SIOD 26
#define CAM_PIN_SIOC 27
#define CAM_PIN_D7 35
#define CAM_PIN_D6 34
#define CAM_PIN_D5 39
#define CAM_PIN_D4 36
#define CAM_PIN_D3 21
#define CAM_PIN_D2 19
#define CAM_PIN_D1 18
#define CAM_PIN_D0 5
#define CAM_PIN_VSYNC 25
#define CAM_PIN_HREF 23
#define CAM_PIN_PCLK 22

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc);vTaskDelete(NULL);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

extern SemaphoreHandle_t playerOptionMutex;
extern int playerOption;

class microROS {
public:
    microROS();
    void initialize();
    void start_receiving_msgs();
    static void choosed_option_callback(const void *msg_recv);

    rclc_executor_t executor;
    rclc_support_t support;

private:
    uint8_t choosed_option_value;
};

#endif