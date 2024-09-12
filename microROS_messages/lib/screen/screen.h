#ifndef SCREEN_H
#define SCREEN_H

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32


#define I2C_SDA 15
#define I2C_SCL 14


#define buttonPin 12


extern int buttonState;
extern int lastButtonState;

extern SemaphoreHandle_t playerOptionMutex;
extern int playerOption;

extern int cpuChoice;



void screen();
void display_setup();
void display_game();
void display_message(int option);

void display_main(void* pvParameters);

#endif