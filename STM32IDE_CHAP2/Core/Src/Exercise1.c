/*
 * Exercise1.c
 *
 *  Created on: Sep 11, 2024
 *      Author: datph
 */
#include "Exercise1.h"

void SevenSEG_Reset() {
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}

void SevenSEG_Init() {
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}

void display1(){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}

void Exercise1_Init() {
	SevenSEG_Reset();
}

void display7SEG(int num){
	SevenSEG_Init();
	switch(num) {
		case 0 :
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 1:
			display1();
			break;
		case 2:
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG5_Pin, SET);
			break;
		case 4:
			display1();
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			break;
		case 7:
			display1();
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			break;
		default:
			break;
	}
}

void Exercise1_Implement() {
	SevenSEG_Reset();
	setTimer1(50);
	  while(1) {
		if (timer1_flag == 1 && status == 1) {
			setTimer1(50);
			display7SEG(1);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN3_Pin, SET);
		}
		else if (timer1_flag == 1 && status == 2) {
			setTimer1(50);
			display7SEG(2);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN3_Pin, SET);
		}
	}
}

