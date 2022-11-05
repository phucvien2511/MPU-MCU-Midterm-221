/*
 * fsm_automatic.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Phuc
 */

#include "fsm.h"

void setStatusByButton() {
	//Blinking LED every second
	if (timer3_flag == 1) {
		HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);
		setTimer3(100);
	}
	if (isButtonPressed(RESET_BUTTON) == 1) {
		//Only stop auto countdown if INC/DEC pressed
		if (status != AUTO_DOWN) {
			status = RESET;
			counter = 0;
		}
	}
	if (isButtonPressed(INC_BUTTON) == 1 ) {
		status = INC;
		counter++;
		if (counter > 9) counter = 0;
		HAL_GPIO_TogglePin(GPIOA, LED_RED_Pin);

	}
	if (isButtonPressed(DEC_BUTTON) == 1) {
		status = DEC;
		counter--;
		if (counter < 0) counter = 9;
	}
	if (isButtonLongPressed(INC_BUTTON) == 1) {	//Long-pressed INC button for 3 seconds
		status = LONG_PRESS_INC;
		timeOutLongPress[INC_BUTTON] = 100;

	}
	if (isButtonLongPressed(DEC_BUTTON) == 1) {	//Long-pressed DEC button for 3 seconds
		status = LONG_PRESS_DEC;
		timeOutLongPress[DEC_BUTTON] = 100;
	}
}


void fsm_simple_buttons_run() {
	switch (status) {
	case INIT:
		clear7SEG();
		clearLED();
		setTimer1(100);		//Auto countdown timer
		setTimer2(1000);	//Wait for auto countdown timer
		setTimer3(100);		//Blinking LED timer
		status = AUTO_DOWN;
		break;
	case RESET:
		display7SEG(counter);
		setStatusByButton();
		if (timer2_flag == 1) {
			status = WAIT_FOR_AUTO_DOWN;
			setTimer2(500);
		}
		break;
	case INC:
		display7SEG(counter);
		setStatusByButton();
		if (timer2_flag == 1) {
			status = WAIT_FOR_AUTO_DOWN;
			setTimer2(500);
		}
		break;
	case DEC:
		display7SEG(counter);
		setStatusByButton();
		if (timer2_flag == 1) {
			status = WAIT_FOR_AUTO_DOWN;
			setTimer2(500);
		}
		break;
	case LONG_PRESS_INC:
		display7SEG(counter);
		setStatusByButton();
		if (timer2_flag == 1) {
			status = WAIT_FOR_AUTO_DOWN;
			setTimer2(500);
		}
		break;
	case LONG_PRESS_DEC:
		display7SEG(counter);
		setStatusByButton();
		if (timer2_flag == 1) {
			status = WAIT_FOR_AUTO_DOWN;
			setTimer2(500);
		}
		break;
	case WAIT_FOR_AUTO_DOWN:
		if (timer2_flag == 1) {
			status = AUTO_DOWN;
		}
		setStatusByButton();
		break;
	case AUTO_DOWN:
		display7SEG(counter);
		if (timer1_flag == 1) {
			if (counter > 0) counter--;
			setTimer1(100);
		}
		setStatusByButton();
		break;
	default:
		break;
	}
}

