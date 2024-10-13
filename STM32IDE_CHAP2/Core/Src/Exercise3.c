/*
 * Exercise3.c
 *
 *  Created on: Sep 16, 2024
 *      Author: datph
 */
#include "Exercise3.h"

void Exercise3_Init() {

}

void Exercise3_Implement() {
	const int MAX_LED = 4;
	int index_led =0;
	int led_buffer[4] = {1 , 2 , 3 , 4};
	for (index_led = 0; index_led < MAX_LED; index_led++) {
		update7SEG(led_buffer[index_led], 8);
	}
}

