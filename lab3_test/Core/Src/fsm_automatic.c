/*
 * fsm_automatic.c
 *
 *  Created on: Nov 2, 2022
 *      Author: ASUS
 */

#include "fsm_automatic.h"
#include "software_timer.h"
#include "main.h"
#include "display_led.h"


void fsm_automatic_run(){
	switch(status){
	case INIT:
		status = AUTO_RED;
		setTimer1(MAX_RED*100);
		setTimer2(100);
		display7SEG_2(1);
		break;
	case AUTO_RED:
		display7SEG_2(1);
		if(num_red == 0) num_red = MAX_RED;
		display7SEG(num_red);
		if(timer2_flag == 1){
			num_red--;
			setTimer2(100);
		}
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		if(timer1_flag == 1){
			status = AUTO_GREEN;
			setTimer1(MAX_GREEN*100);
			num_green =0;
			setTimer2(100);
		}
		if(is_Button1_Pressed() == 1)
		{
			status = MAN_RED;
			setTimer2(50);
		}
		break;
	case AUTO_GREEN:
		display7SEG_2(1);
		if(num_green == 0) num_green = MAX_GREEN;
		display7SEG(num_green);
		if(timer2_flag == 1){
			num_green--;
			setTimer2(100);
		}
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
		if(timer1_flag == 1){
			status = AUTO_YELLOW;
			num_yellow=0;
			setTimer1(MAX_YELLOW*100);
			setTimer2(100);
		}
		if(is_Button1_Pressed() == 1)
		{
			status = MAN_RED;
			setTimer2(50);
		}
		break;
	case AUTO_YELLOW:
		display7SEG_2(1);
		if(num_yellow == 0) num_yellow = MAX_YELLOW;
		display7SEG(num_yellow);
		if(timer2_flag == 1){
			num_yellow--;
			setTimer2(100);
		}
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
		if(timer1_flag == 1){
			status = AUTO_RED;
			num_red=0;
			setTimer1(MAX_RED*100);
			setTimer2(100);
		}
		if(is_Button1_Pressed() == 1)
		{
			status = MAN_RED;
			setTimer2(50);
		}
		break;
	default:
		break;
	}
}
//---fsm_automatic_2-------
void fsm_automatic_2_run(){
	switch(status_2){
	case INIT:
		status_2 = AUTO_GREEN;
		setTimer3(MAX_GREEN*100);
		setTimer4(100);
		break;
	case AUTO_RED:
		if(num_red2 == 0) num_red2 = MAX_RED2;
		display7SEG_3(num_red2);
		if(timer4_flag == 1){
			num_red2--;
			setTimer4(100);
		}
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		if(timer3_flag == 1){
			status_2 = AUTO_GREEN;
			setTimer3(MAX_GREEN2*100);
			num_green2 =0;
			setTimer4(100);
		}
		if(status == MAN_RED)
		{
			status_2 = MAN_RED;
			setTimer4(50);

		}
		break;
	case AUTO_GREEN:
		if(num_green2 == 0) num_green2 = MAX_GREEN2;
		display7SEG_3(num_green2);
		if(timer4_flag == 1){
			num_green2--;
			setTimer4(100);
		}
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
		if(timer3_flag == 1){
			status_2 = AUTO_YELLOW;
			num_yellow2=0;
			setTimer3(MAX_YELLOW2*100);
			setTimer4(100);
		}
		if(status == MAN_RED)
		{
			status_2 = MAN_RED;
			setTimer4(50);

		}
		break;
	case AUTO_YELLOW:
		if(num_yellow2 == 0) num_yellow2 = MAX_YELLOW2;
		display7SEG_3(num_yellow2);
		if(timer4_flag == 1){
			num_yellow2--;
			setTimer4(100);
		}
		HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
		HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
		if(timer3_flag == 1){
			status_2 = AUTO_RED;
			num_red2=0;
			setTimer3(MAX_RED2*100);
			setTimer4(100);
		}
		if(status_2 == MAN_RED)
		{
			status_2 = MAN_RED;
			setTimer4(50);
		}
		break;
	default:
		break;
	}
}
