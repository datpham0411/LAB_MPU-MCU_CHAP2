/*
 * Exercise8.c
 *
 *  Created on: Sep 25, 2024
 *      Author: datph
 */
#include "Exercise8.h"

void Exercise8_Init() {
}



void Exercise8_Implement(){
	int hour = 15, minute = 8, second = 50;
		int led_buffer[4] = {1 , 2 , 3 , 4};
		while(1) {

			if (timer1_flag == 1 && second < 60) {
				second++;
				setTimer1(100);
			}
			if (timer1_flag == 1 && second >= 60) {
				second = 0;
				minute++;
				setTimer1(100);
			}
			if (timer1_flag == 1 && minute >= 60) {
				minute = 0;
				hour++;
				setTimer1(100);
			}
			if (timer1_flag == 1 && hour >= 24) {
				hour = 0;
				setTimer1(100);
			}

			updateClockBuffer(hour, minute, second, &led_buffer[0], &led_buffer[1], &led_buffer[2]);

			if (timer0_flag == 1 && status == 1) {
				update7SEG(status, led_buffer[0]/10);
				setTimer0(23);
			}
			if (timer0_flag == 1 && status == 2) {
				update7SEG(status, led_buffer[0]%10);
				setTimer0(23);
			}
			if (timer0_flag == 1 && status == 3) {
				update7SEG(status, led_buffer[1]/10);
				setTimer0(23);

			}
			if (timer0_flag == 1 && status == 4) {
				update7SEG(status, led_buffer[1]%10);
				setTimer0(23);
			}
			if(timer2_flag == 1) {
				setTimer2(93);
				HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
			}
		}
}

