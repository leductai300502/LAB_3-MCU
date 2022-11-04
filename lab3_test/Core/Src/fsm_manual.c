/*
 * fsm_manual.c
 *
 *  Created on: Nov 2, 2022
 *      Author: ASUS
 */

#include "fsm_manual.h"
#include "display_led.h"
#include "main.h"

void fsm_manual_run(){
	switch(status){
		case MAN_RED:
			display7SEG_2(2);
			display7SEG(MAX_RED);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			if(timer2_flag == 1){
				HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
				setTimer2(50);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = MAN_GREEN;
				status_2 = MAN_GREEN;
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
			display7SEG_2(3);
			display7SEG(MAX_GREEN);
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			if(timer2_flag == 1){
				HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
				setTimer2(50);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = MAN_YELLOW;
				status_2 = MAN_YELLOW;
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
			display7SEG_2(4);
			display7SEG(MAX_YELLOW);
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			if(timer2_flag == 1){
				HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
				setTimer2(50);
			}
			if(is_Button1_Pressed() == 1)
			{
				status = MAN_RED;
				status_2 = MAN_RED;

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

void fsm_manual_2_run()
{
	switch(status_2)
	{
	case MAN_RED:
		display7SEG_3(MAX_RED2);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		if(timer4_flag == 1){
			HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
			setTimer4(50);
		}
		break;
	case MAN_GREEN:
		display7SEG_3(MAX_GREEN2);
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		if(timer4_flag == 1){
			HAL_GPIO_TogglePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin);
			setTimer4(50);
		}
		break;
	case MAN_YELLOW:
		display7SEG_3(MAX_YELLOW2);
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
		if(timer4_flag == 1){
			HAL_GPIO_TogglePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin);
			setTimer4(50);
		}
		break;
	default:
		break;
	}

}
