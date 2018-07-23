#include <xConfig.h>
#include <xCore.h>
#include <xVersion.h>

#include <xCore.h>
#include <xOD01.h>
#include "TIMER_CTRL.h"
#include <xSI01.h>

#define RED A4
#define GREEN 8
#define BLUE 9

bool instruct_flag = false;
bool intro_flag = true;


bool fade_flag1 = true;
unsigned long previousMilli1 = 0;    // timing variable for LEDS
int LED_state1 = 0;
bool fade_flag2 = true;
unsigned long previousMilli2 = 0;    // timing variable for LEDS
int LED_state2 = 0;
bool fade_flag3 = true;
unsigned long previousMilli3 = 0;    // timing variable for LEDS
int LED_state3 = 0;

// Create a variable to store the data read from SW01


void setup() {
  // put your setup code here, to run once:
  setup_program();
}

void loop() {
  // put your main code here, to run repeatedly:
  main_program();
}
