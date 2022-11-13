/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Button1_Pin GPIO_PIN_13
#define Button1_GPIO_Port GPIOC
#define Button2_Pin GPIO_PIN_14
#define Button2_GPIO_Port GPIOC
#define Button3_Pin GPIO_PIN_15
#define Button3_GPIO_Port GPIOC
#define LED_RED2_Pin GPIO_PIN_2
#define LED_RED2_GPIO_Port GPIOA
#define LED_GREEN2_Pin GPIO_PIN_3
#define LED_GREEN2_GPIO_Port GPIOA
#define LED_YELLOW2_Pin GPIO_PIN_4
#define LED_YELLOW2_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_6
#define LED_RED_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define SEGA1_Pin GPIO_PIN_0
#define SEGA1_GPIO_Port GPIOB
#define SEGA2_Pin GPIO_PIN_1
#define SEGA2_GPIO_Port GPIOB
#define SEGA3_Pin GPIO_PIN_2
#define SEGA3_GPIO_Port GPIOB
#define SEGB4_Pin GPIO_PIN_10
#define SEGB4_GPIO_Port GPIOB
#define SEGB5_Pin GPIO_PIN_11
#define SEGB5_GPIO_Port GPIOB
#define SEGB6_Pin GPIO_PIN_12
#define SEGB6_GPIO_Port GPIOB
#define SEGB7_Pin GPIO_PIN_13
#define SEGB7_GPIO_Port GPIOB
#define EN1_Pin GPIO_PIN_14
#define EN1_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_15
#define EN2_GPIO_Port GPIOB
#define LED_YELLOW_Pin GPIO_PIN_8
#define LED_YELLOW_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_12
#define EN3_GPIO_Port GPIOA
#define EN4_Pin GPIO_PIN_13
#define EN4_GPIO_Port GPIOA
#define SEGA4_Pin GPIO_PIN_3
#define SEGA4_GPIO_Port GPIOB
#define SEGA5_Pin GPIO_PIN_4
#define SEGA5_GPIO_Port GPIOB
#define SEGA6_Pin GPIO_PIN_5
#define SEGA6_GPIO_Port GPIOB
#define SEGA7_Pin GPIO_PIN_6
#define SEGA7_GPIO_Port GPIOB
#define SEGB1_Pin GPIO_PIN_7
#define SEGB1_GPIO_Port GPIOB
#define SEGB2_Pin GPIO_PIN_8
#define SEGB2_GPIO_Port GPIOB
#define SEGB3_Pin GPIO_PIN_9
#define SEGB3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
