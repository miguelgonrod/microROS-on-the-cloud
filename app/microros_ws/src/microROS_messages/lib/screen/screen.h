#ifndef SCREEN_H
#define SCREEN_H

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

// ESP32-CAM doesn't have dedicated i2c pins, so we define our own. Let's choose 15 and 14
#define I2C_SDA 15
#define I2C_SCL 14

// Pin Definitions
#define buttonPin 12

// Variables para almacenar el estado del botón
extern int buttonState;
extern int lastButtonState;

extern SemaphoreHandle_t playerOptionMutex;
extern int playerOption;

extern int cpuChoice;


// Functions
void screen();
void display_setup();
void display_game();
void display_message(int option);

void display_main(void* pvParameters);

#endif