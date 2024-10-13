/*
 * Exercise2.c
 *
 *  Created on: Sep 16, 2024
 *      Author: datph
 */
#include "Exercise2.h"
void Exercise2_Init() {

}
// EnPin: Enable that ENx , DisPin123: Disable ENx
void choose7SEGtoDisplay(GPIO_TypeDef *GPIO_Type, uint16_t EnPin, uint16_t DisPin1, uint16_t DisPin2, uint16_t DisPin3) {
	HAL_GPIO_WritePin(GPIO_Type, EnPin, RESET);
	HAL_GPIO_WritePin(GPIO_Type, DisPin1, SET);
	HAL_GPIO_WritePin(GPIO_Type, DisPin2, SET);
	HAL_GPIO_WritePin(GPIO_Type, DisPin3, SET);
}

void Exercise2_Implement() {
	setTimer2(139);
	while(1) {
		if (timer1_flag == 1 && status == 1) {
			setTimer1(50);
			display7SEG(status);
			choose7SEGtoDisplay(GPIOA, EN0_Pin, EN1_Pin, EN2_Pin, EN3_Pin);
		}
		else if (timer1_flag == 1 && status == 2) {
			setTimer1(50);
			display7SEG(status);
			choose7SEGtoDisplay(GPIOA, EN1_Pin, EN0_Pin, EN2_Pin, EN3_Pin);
		}
		else if (timer1_flag == 1 && status == 3) {
			setTimer1(50);
			display7SEG(status);
			choose7SEGtoDisplay(GPIOA, EN2_Pin, EN0_Pin, EN1_Pin, EN3_Pin);
		}
		else if (timer1_flag == 1 && status == 4) {
			setTimer1(50);
			display7SEG(0);
			choose7SEGtoDisplay(GPIOA, EN3_Pin, EN0_Pin, EN1_Pin, EN2_Pin);
		}
		if (timer2_flag == 1) {
			setTimer2(139);
			HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
		}
	}
}
