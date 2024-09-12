#include <Arduino.h>

#include "screen.h"
#include "microROS.h"

microROS micro_ROS;
SemaphoreHandle_t playerOptionMutex;

int playerOption = 0;

#define LED_BUILTIN 4

void microROS_main(void* pvParameters);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);

  playerOptionMutex = xSemaphoreCreateMutex();

  display_setup();
  
  micro_ROS.initialize();

  xTaskCreatePinnedToCore(
    display_main,
    "Task1",
    10000,
    NULL,
    1,
    NULL,
    0
  );            // Core 0


  xTaskCreatePinnedToCore(
    microROS_main,
    "Task2",
    10000,
    NULL,
    1,
    NULL,
    1
  );            // Core 1
}

void loop() {
  //display_game();
}

void microROS_main(void* pvParameters){
  while(1){
    micro_ROS.start_receiving_msgs();

    rclc_executor_spin_some(&micro_ROS.executor, RCL_MS_TO_NS(100));
    vTaskDelay(20);
  }
}