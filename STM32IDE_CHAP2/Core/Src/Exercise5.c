/*
 * Exercise5.c
 *
 *  Created on: Sep 23, 2024
 *      Author: datph
 */
#include "Exercise5.h"
void Exercise5_Init() {

}

void updateClockBuffer(int hour, int minute, int second, int *led_buffer_0, int* led_buffer_1, int* led_buffer_2);

void Exercise5_Implement() {
	int hour = 15, minute = 8, second = 50;
	int led_buffer[4] = {1 , 2 , 3 , 4};
	while(1) {
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
		updateClockBuffer(hour, minute, second, &led_buffer[0], &led_buffer[1], &led_buffer[2]);
		HAL_Delay(1000);
	}
}

void updateClockBuffer(int hour, int minute, int second, int *led_buffer_0, int* led_buffer_1, int* led_buffer_2) {
	*led_buffer_0 = hour;
	*led_buffer_1 = minute;
	*led_buffer_2 = second;
}


