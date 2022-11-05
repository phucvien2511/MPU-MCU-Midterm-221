/*
 * global.c
 *
 *  Created on: Nov 4, 2022
 *      Author: Phuc
 */

#include "global.h"

int status = INIT;
uint16_t BUTTON[NUM_BUTTONS] = {BUTTON_1_Pin, BUTTON_2_Pin, BUTTON_3_Pin};
uint16_t LED[NUM_LEDS] = {LED_RED_Pin};
int counter = 9;
int firstLongPress = 0;
int timeOutLongPress[NUM_BUTTONS] = {TIMEOUT_LONG_PRESS};
