/*
 * Exercise6.c
 *
 *  Created on: Sep 25, 2024
 *      Author: datph
 */
#include "Exercise6.h"

void Exercise6_Init() {

}

void Exercise6_Implement(){
	int hour = 15, minute = 8, second = 50;
		while(1) {
			if(timer0_flag == 1) {
				HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
				setTimer0(1000);
			}
			second++;
			if (second >= 60) {
				second = 0;
				minute++;
			}
			if (minute >= 60) {
				minute = 0;
				hour++;
			}
			if (hour >= 24) {
				hour = 0;
			}
			updateClockBuffer(hour, minute, second);
		}
}

