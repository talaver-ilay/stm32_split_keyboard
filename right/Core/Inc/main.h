/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"
#include "ssd1306.h"
#include "ssd1306_tests.h"
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
#define key_a 0x04
#define key_b 0x05
#define key_c 0x06
#define key_d 0x07
#define key_e 0x08
#define key_f 0x09
#define key_g 0x0A
#define key_h 0x0B
#define key_i 0x0C
#define key_j 0x0D
#define key_k 0x0E
#define key_l 0x0F
#define key_m 0x10
#define key_n 0x11
#define key_o 0x12
#define key_p 0x13
#define key_q 0x14
#define key_r 0x15
#define key_s 0x16
#define key_t 0x17
#define key_u 0x18
#define key_v 0x19
#define key_w 0x1A
#define key_x 0x1B
#define key_y 0x1C
#define key_z 0x1D
#define key_Enter      0x28
#define key_esc        0x29
#define key_DELETE     0x2A
#define key_Tab 		   0x2B
#define key_Spacebar   0x2C
#define key_RightArrow 0x4F
#define key_LeftArrow  0x50
#define key_DownArrow  0x51
#define key_UpArrow 	 0x52

#define key_1 					          0x1E      
#define key_2 		                0x1F									 
#define key_3 		                0x20
#define key_4 		                0x21
#define key_5 		                0x22
#define key_6 		                0x23
#define key_7 		                0x24
#define key_8 		                0x25
#define key_9 		                0x26
#define key_0 		                0x27
#define key_Minus 		            0x2D //'-'
#define key_Equal                 0x2E //'='
#define key_SquareBrackets_Left   0x2F //'['
#define key_SquareBrackets_Right  0x30 //']'
#define key_Backslash             0x31 //'\'
#define key_Semicolon             0x33 //';'
#define key_Apostrophe            0x34 //'''
#define key_Grave                 0x35	//'`'																			
#define key_Comma                 0x36 //','
#define key_Dot                   0x37 //'.'
#define key_Slash                 0x38 //'/'
//#define key_Star                	0x55 //'*'
#define key_Plus                	0x57 //'+'
//
#define key_Fn                		0xE8 //'Fn'
#define Fn_q 											0xE814
#define Fn_w 											0xE81A
#define Fn_e 											0xE808
#define Fn_r											0xE815
#define Fn_t											0xE817
#define Fn_a											0xE804
#define Fn_s											0xE816
#define Fn_d											0xE807
#define Fn_f											0xE809
#define Fn_g											0xE80A
#define Fn_z											0xE81D
#define Fn_x											0xE81B
#define Fn_c											0xE806
#define Fn_v											0xE819
#define Fn_b											0xE805

#define Fn_y											0xE81C
#define Fn_u											0xE818
#define Fn_i											0xE80C
#define Fn_o											0xE812
#define Fn_p											0xE813
#define Fn_SquareBrackets_Left		0xE82F
#define Fn_SquareBrackets_Right 	0xE830
#define Fn_h											0xE80B
#define Fn_j											0xE80D
#define Fn_k											0xE80E
#define Fn_l											0xE80F
#define Fn_Semicolon							0xE833
#define Fn_n											0xE811
#define Fn_m											0xE810
#define Fn_Comma									0xE836
#define Fn_Dot										0xE837
#define Fn_Apostrophe							0xE834
#define Fn_Up											0xE852
#define Fn_Enter									0xE828
#define Fn_Spacebar								0xE82C
#define Fn_LeftArrow  						0xE850
//
#define key_Tilde 						0x35E1 //'~'
#define key_Exclamation 			0x1EE1 //'!'
#define key_dog				  			0x1FE1 //'@'
#define key_Number 						0x20E1 //'#'
#define key_Dollar		  			0x21E1 //'$'
#define key_Percent 	  			0x22E1 //'%'
#define key_LetterUp    			0x23E1 //'^'
#define key_Ampersand   			0x24E1 //'&'
#define key_Star							0x25E1 //'&'
#define key_LeftParenthesis   0x26E1 //'(' 
#define key_RightParenthesis  0x27E1 //')' 
#define key_underscore        0x2DE1 //'_'
#define key_cbar        			0x31E1 //'|'
#define key_Exit							0x3DE2//Alt+F4

#define key_LeftCrtl   0xE0
#define key_LeftShift  0xE1
#define key_LeftAlt    0xE2
#define key_LeftGUI    0xE3
#define key_RightCrtl  0xE4
#define key_RightShift 0xE5
#define key_RightAlt   0xE6
#define key_RightGUI   0xE7

#define USB_HID_SCAN_NEXT 0x01
#define USB_HID_SCAN_PREV 0x02
#define USB_HID_STOP      0x04
#define USB_HID_EJECT     0x08
#define USB_HID_PAUSE     0x10
#define USB_HID_MUTE      0x20
#define USB_HID_VOL_UP    0x40
#define USB_HID_VOL_DEC   0x80


/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
