/*
 * fsm_manual.c
 *
 *  Created on: Nov 12, 2022
 *      Author: ASUS
 */

#include "fsm_manual.h"
#include "display_led.h"
#include "main.h"

void fsm_manual_run(){
	switch(status){
		case MAN_RED:
			if(index_led > 1) index_led = 0;
			if(index_led2 > 3) index_led2 = 2;
			Increase_time(MAX_RED);
			Increase_time_2(2);
			update7SEG_2(index_led2);
			update7SEG(index_led);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			if(timer2_flag == 1){
				HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
				HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
				index_led++;
				index_led2++;
				setTimer2(50);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = MAN_GREEN;
				//status_2 = MAN_GREEN;
				setTimer2(50);
			}
			if(is_Button2_Pressed() == 1)
			{
				MAX_RED++;
				MAX_RED2++;
			}
			if(is_Button3_Pressed() == 1)
			{
				status = AUTO_RED;
				status_2 = AUTO_GREEN;
				num_red = 0;
				num_green2 = 0;
				setTimer1(MAX_RED*100-100);
				setTimer3(MAX_GREEN2*100-100);
			}
			break;
		case MAN_GREEN:
			if(index_led > 1) index_led = 0;
			if(index_led2 > 3) index_led2 = 2;
			Increase_time(MAX_GREEN);
			Increase_time_2(3);
			update7SEG_2(index_led2);
			update7SEG(index_led);
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			if(timer2_flag == 1){
				HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
				HAL_GPIO_TogglePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin);
				index_led++;
				index_led2++;
				setTimer2(50);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = MAN_YELLOW;
				//status_2 = MAN_YELLOW;
				setTimer2(50);
			}
			if(is_Button2_Pressed() == 1)
			{
				MAX_GREEN++;
				MAX_GREEN2++;
			}
			if(is_Button3_Pressed() == 1)
			{
				status = AUTO_RED;
				status_2 = AUTO_GREEN;
				num_red = 0;
				num_green2 = 0;
				setTimer1(MAX_RED*100-100);
				setTimer3(MAX_GREEN2*100-100);
			}
			break;
		case MAN_YELLOW:
			if(index_led > 1) index_led = 0;
			if(index_led2 > 3) index_led2 = 2;
			Increase_time(MAX_YELLOW);
			Increase_time_2(4);
			update7SEG_2(index_led2);
			update7SEG(index_led);
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			if(timer2_flag == 1){
				HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
				HAL_GPIO_TogglePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin);
				index_led++;
				index_led2++;
				setTimer2(50);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = MAN_RED;
				//status_2 = MAN_RED;

			}
			if(is_Button2_Pressed() == 1)
			{
				MAX_YELLOW++;
				MAX_YELLOW2++;
			}
			if(is_Button3_Pressed() == 1)
			{
				status = AUTO_RED;
				status_2 = AUTO_GREEN;
				num_red = 0;
				num_green2 = 0;
				setTimer1(MAX_RED*100-100);
				setTimer3(MAX_GREEN2*100-100);
			}
			break;
		default:
			break;
		}
}
