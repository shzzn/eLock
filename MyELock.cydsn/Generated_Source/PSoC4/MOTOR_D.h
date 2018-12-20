/*******************************************************************************
* File Name: MOTOR_D.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MOTOR_D_H) /* Pins MOTOR_D_H */
#define CY_PINS_MOTOR_D_H

#include "cytypes.h"
#include "cyfitter.h"
#include "MOTOR_D_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} MOTOR_D_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   MOTOR_D_Read(void);
void    MOTOR_D_Write(uint8 value);
uint8   MOTOR_D_ReadDataReg(void);
#if defined(MOTOR_D__PC) || (CY_PSOC4_4200L) 
    void    MOTOR_D_SetDriveMode(uint8 mode);
#endif
void    MOTOR_D_SetInterruptMode(uint16 position, uint16 mode);
uint8   MOTOR_D_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void MOTOR_D_Sleep(void); 
void MOTOR_D_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(MOTOR_D__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define MOTOR_D_DRIVE_MODE_BITS        (3)
    #define MOTOR_D_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - MOTOR_D_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the MOTOR_D_SetDriveMode() function.
         *  @{
         */
        #define MOTOR_D_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define MOTOR_D_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define MOTOR_D_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define MOTOR_D_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define MOTOR_D_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define MOTOR_D_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define MOTOR_D_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define MOTOR_D_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define MOTOR_D_MASK               MOTOR_D__MASK
#define MOTOR_D_SHIFT              MOTOR_D__SHIFT
#define MOTOR_D_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in MOTOR_D_SetInterruptMode() function.
     *  @{
     */
        #define MOTOR_D_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define MOTOR_D_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define MOTOR_D_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define MOTOR_D_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(MOTOR_D__SIO)
    #define MOTOR_D_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(MOTOR_D__PC) && (CY_PSOC4_4200L)
    #define MOTOR_D_USBIO_ENABLE               ((uint32)0x80000000u)
    #define MOTOR_D_USBIO_DISABLE              ((uint32)(~MOTOR_D_USBIO_ENABLE))
    #define MOTOR_D_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define MOTOR_D_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define MOTOR_D_USBIO_ENTER_SLEEP          ((uint32)((1u << MOTOR_D_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << MOTOR_D_USBIO_SUSPEND_DEL_SHIFT)))
    #define MOTOR_D_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << MOTOR_D_USBIO_SUSPEND_SHIFT)))
    #define MOTOR_D_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << MOTOR_D_USBIO_SUSPEND_DEL_SHIFT)))
    #define MOTOR_D_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(MOTOR_D__PC)
    /* Port Configuration */
    #define MOTOR_D_PC                 (* (reg32 *) MOTOR_D__PC)
#endif
/* Pin State */
#define MOTOR_D_PS                     (* (reg32 *) MOTOR_D__PS)
/* Data Register */
#define MOTOR_D_DR                     (* (reg32 *) MOTOR_D__DR)
/* Input Buffer Disable Override */
#define MOTOR_D_INP_DIS                (* (reg32 *) MOTOR_D__PC2)

/* Interrupt configuration Registers */
#define MOTOR_D_INTCFG                 (* (reg32 *) MOTOR_D__INTCFG)
#define MOTOR_D_INTSTAT                (* (reg32 *) MOTOR_D__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define MOTOR_D_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(MOTOR_D__SIO)
    #define MOTOR_D_SIO_REG            (* (reg32 *) MOTOR_D__SIO)
#endif /* (MOTOR_D__SIO_CFG) */

/* USBIO registers */
#if !defined(MOTOR_D__PC) && (CY_PSOC4_4200L)
    #define MOTOR_D_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define MOTOR_D_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define MOTOR_D_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define MOTOR_D_DRIVE_MODE_SHIFT       (0x00u)
#define MOTOR_D_DRIVE_MODE_MASK        (0x07u << MOTOR_D_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins MOTOR_D_H */


/* [] END OF FILE */
