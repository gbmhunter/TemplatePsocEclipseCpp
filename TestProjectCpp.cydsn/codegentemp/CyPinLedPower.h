/*******************************************************************************
* File Name: CyPinLedPower.h  
* Version 2.5
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_CyPinLedPower_H) /* Pins CyPinLedPower_H */
#define CY_PINS_CyPinLedPower_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "CyPinLedPower_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_5 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 CyPinLedPower__PORT == 15 && ((CyPinLedPower__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    CyPinLedPower_Write(uint8 value) ;
void    CyPinLedPower_SetDriveMode(uint8 mode) ;
uint8   CyPinLedPower_ReadDataReg(void) ;
uint8   CyPinLedPower_Read(void) ;
uint8   CyPinLedPower_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define CyPinLedPower_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define CyPinLedPower_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define CyPinLedPower_DM_RES_UP          PIN_DM_RES_UP
#define CyPinLedPower_DM_RES_DWN         PIN_DM_RES_DWN
#define CyPinLedPower_DM_OD_LO           PIN_DM_OD_LO
#define CyPinLedPower_DM_OD_HI           PIN_DM_OD_HI
#define CyPinLedPower_DM_STRONG          PIN_DM_STRONG
#define CyPinLedPower_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define CyPinLedPower_MASK               CyPinLedPower__MASK
#define CyPinLedPower_SHIFT              CyPinLedPower__SHIFT
#define CyPinLedPower_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CyPinLedPower_PS                     (* (reg8 *) CyPinLedPower__PS)
/* Data Register */
#define CyPinLedPower_DR                     (* (reg8 *) CyPinLedPower__DR)
/* Port Number */
#define CyPinLedPower_PRT_NUM                (* (reg8 *) CyPinLedPower__PRT) 
/* Connect to Analog Globals */                                                  
#define CyPinLedPower_AG                     (* (reg8 *) CyPinLedPower__AG)                       
/* Analog MUX bux enable */
#define CyPinLedPower_AMUX                   (* (reg8 *) CyPinLedPower__AMUX) 
/* Bidirectional Enable */                                                        
#define CyPinLedPower_BIE                    (* (reg8 *) CyPinLedPower__BIE)
/* Bit-mask for Aliased Register Access */
#define CyPinLedPower_BIT_MASK               (* (reg8 *) CyPinLedPower__BIT_MASK)
/* Bypass Enable */
#define CyPinLedPower_BYP                    (* (reg8 *) CyPinLedPower__BYP)
/* Port wide control signals */                                                   
#define CyPinLedPower_CTL                    (* (reg8 *) CyPinLedPower__CTL)
/* Drive Modes */
#define CyPinLedPower_DM0                    (* (reg8 *) CyPinLedPower__DM0) 
#define CyPinLedPower_DM1                    (* (reg8 *) CyPinLedPower__DM1)
#define CyPinLedPower_DM2                    (* (reg8 *) CyPinLedPower__DM2) 
/* Input Buffer Disable Override */
#define CyPinLedPower_INP_DIS                (* (reg8 *) CyPinLedPower__INP_DIS)
/* LCD Common or Segment Drive */
#define CyPinLedPower_LCD_COM_SEG            (* (reg8 *) CyPinLedPower__LCD_COM_SEG)
/* Enable Segment LCD */
#define CyPinLedPower_LCD_EN                 (* (reg8 *) CyPinLedPower__LCD_EN)
/* Slew Rate Control */
#define CyPinLedPower_SLW                    (* (reg8 *) CyPinLedPower__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define CyPinLedPower_PRTDSI__CAPS_SEL       (* (reg8 *) CyPinLedPower__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define CyPinLedPower_PRTDSI__DBL_SYNC_IN    (* (reg8 *) CyPinLedPower__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define CyPinLedPower_PRTDSI__OE_SEL0        (* (reg8 *) CyPinLedPower__PRTDSI__OE_SEL0) 
#define CyPinLedPower_PRTDSI__OE_SEL1        (* (reg8 *) CyPinLedPower__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define CyPinLedPower_PRTDSI__OUT_SEL0       (* (reg8 *) CyPinLedPower__PRTDSI__OUT_SEL0) 
#define CyPinLedPower_PRTDSI__OUT_SEL1       (* (reg8 *) CyPinLedPower__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define CyPinLedPower_PRTDSI__SYNC_OUT       (* (reg8 *) CyPinLedPower__PRTDSI__SYNC_OUT) 


#if defined(CyPinLedPower__INTSTAT)  /* Interrupt Registers */

    #define CyPinLedPower_INTSTAT                (* (reg8 *) CyPinLedPower__INTSTAT)
    #define CyPinLedPower_SNAP                   (* (reg8 *) CyPinLedPower__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_CyPinLedPower_H */


/* [] END OF FILE */
