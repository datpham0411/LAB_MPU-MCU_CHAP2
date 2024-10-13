/*
 * Exercise4.c
 *
 *  Created on: Sep 23, 2024
 *      Author: datph
 */
#include "Exercise4.h"
void Exercise4_Init() {

}
void Exercise4_Implement() {
			if (timer1_flag == 1) {
				setTimer1(25);
				update7SEG(status, 8);
			}
			if (timer2_flag == 1) {
				setTimer2(100);
				HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
			}
}

