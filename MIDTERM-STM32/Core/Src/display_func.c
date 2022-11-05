/*
 * display_func.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Phuc
 */
#include "display_func.h"
void display7SEG(int num) {
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
	}
}

void clear7SEG() {
	HAL_GPIO_WritePin(S0_GPIO_Port, S0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(S1_GPIO_Port, S1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(S2_GPIO_Port, S2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(S3_GPIO_Port, S3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(S4_GPIO_Port, S4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(S5_GPIO_Port, S5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(S6_GPIO_Port, S6_Pin, GPIO_PIN_SET);
}

void clearLED() {
	for (int i = 0; i < NUM_LEDS; i++) {
		HAL_GPIO_WritePin(GPIOA, LED[i], SET);
	}
}

