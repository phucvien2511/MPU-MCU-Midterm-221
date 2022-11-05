/*
 * global.h
 *
 *  Created on: Nov 4, 2022
 *      Author: Phuc
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "display_func.h"

/* Device define */
#define NUM_BUTTONS		3		//Button amount
#define NUM_LEDS		1		//Single LED amount
#define RESET_BUTTON	0
#define INC_BUTTON		1
#define DEC_BUTTON		2
/* Device define END */

/* FSM states define */
#define INIT					10
#define RESET					11
#define INC						12
#define DEC						13
#define LONG_PRESS_INC			14
#define LONG_PRESS_DEC			15
#define WAIT_FOR_AUTO_DOWN		16
#define AUTO_DOWN				17
/* FSM states define END */

/* Global variables */
#define TIMEOUT_LONG_PRESS		300		//If you press and hold the button for more than 3 seconds, we treat it as a long press
extern int status;						//FSM status
uint16_t BUTTON[NUM_BUTTONS];
uint16_t LED[NUM_LEDS];
extern int counter;
extern int button_flag[3];
extern int firstLongPress;
extern int timeOutLongPress[NUM_BUTTONS];
/* Global variables END */

#endif /* INC_GLOBAL_H_ */
