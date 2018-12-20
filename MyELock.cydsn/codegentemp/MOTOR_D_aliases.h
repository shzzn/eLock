/*******************************************************************************
* File Name: MOTOR_D.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MOTOR_D_ALIASES_H) /* Pins MOTOR_D_ALIASES_H */
#define CY_PINS_MOTOR_D_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define MOTOR_D_0			(MOTOR_D__0__PC)
#define MOTOR_D_0_PS		(MOTOR_D__0__PS)
#define MOTOR_D_0_PC		(MOTOR_D__0__PC)
#define MOTOR_D_0_DR		(MOTOR_D__0__DR)
#define MOTOR_D_0_SHIFT	(MOTOR_D__0__SHIFT)
#define MOTOR_D_0_INTR	((uint16)((uint16)0x0003u << (MOTOR_D__0__SHIFT*2u)))

#define MOTOR_D_INTR_ALL	 ((uint16)(MOTOR_D_0_INTR))


#endif /* End Pins MOTOR_D_ALIASES_H */


/* [] END OF FILE */
