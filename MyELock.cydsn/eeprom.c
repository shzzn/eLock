#include <project.h>
#include "zmain.h"

/* EEPROM storage in work flash, this is defined in Em_EEPROM.c*/
#if defined (__ICCARM__)
#pragma data_alignment = CY_FLASH_SIZEOF_ROW
const uint8_t Em_EEPROM_em_EepromStorage[Em_EEPROM_PHYSICAL_SIZE] = {0u};
#else
const uint8_t Em_EEPROM_em_EepromStorage[Em_EEPROM_PHYSICAL_SIZE]
__ALIGNED(CY_FLASH_SIZEOF_ROW) = {0u};
#endif /* defined (__ICCARM__) */

/*Return status for EEPROM and UART*/ 
cy_en_em_eeprom_status_t eepromReturnValue;

uint8_t eepromArray[256];


/*Funciton protorype for handling errors*/
void EEPROM_HandleError(void)
{   
#ifdef DEBUG_UART
    DBG_PRINTF("Error! \n\r");
#endif
    /* Disable all interrupts. */
    __disable_irq();
    
    /* Infinite loop. */
    while(1u)
    {
        
    }
}

uint8 PSD_Restore()
{
    eepromReturnValue = Em_EEPROM_Read(EEPROM_START, eepromArray, PSD_EEPROM_SIZE);
    if(eepromReturnValue != CY_EM_EEPROM_SUCCESS)
    {
        return false;
    }
    else
    {
        if((eepromArray[0]==0x5A) & (eepromArray[7]==0xA5))
        {
            uint8 i;
            for(i=0;i<6;i++)
            {
                Password_ID[i]=eepromArray[i+1];
            }
            return true;
        }
        else return false;
    }
}

/* [] END OF FILE */
