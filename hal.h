/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef HAL_H
#define	HAL_H

/**
 * @Summary
 * initialise clock, IO and basic MCU functionalities
 */

void initHardware(void);

/**
 * LED HAL functions
 */
#define IO_LED1_SetHigh()          (_LATE6 = 1)
#define IO_LED1_SetLow()           (_LATE6 = 0)
#define IO_LED1_Toggle()           (_LATE6 ^= 1)
#define IO_LED1_GetValue()         _RE6

#define IO_LED2_SetHigh()          (_LATE5 = 1)
#define IO_LED2_SetLow()           (_LATE5 = 0)
#define IO_LED2_Toggle()           (_LATE5 ^= 1)
#define IO_LED2_GetValue()         _RE5

/**
 * Switch HAL functions
 */
#define IO_SW1_GetValue()         _RE7
#define IO_SW2_GetValue()         _RE8

#endif	/* XC_HEADER_TEMPLATE_H */

