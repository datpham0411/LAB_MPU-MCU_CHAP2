/*
 * Exercise9.c
 *
 *  Created on: Sep 30, 2024
 *      Author: datph
 */
#include "Exercise9.h"

void Exercise9_Init() {

}

void Exercise9_Implement() {
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM6_Pin, SET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM5_Pin, SET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM4_Pin, SET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM3_Pin, SET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM2_Pin, SET);

	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW2_Pin, SET);


	HAL_Delay(1000);
}
