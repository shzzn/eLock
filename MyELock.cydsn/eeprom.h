#ifndef eeprom_h
#define eeprom_h	

#include "project.h"

/*Logical Size of Em_EEPROM*/
#define EEPROM_SIZE     256u
#define PSD_EEPROM_SIZE     8u
#define EEPROM_START    0u
 
/*Return status for EEPROM and UART*/ 
extern cy_en_em_eeprom_status_t eepromReturnValue;

extern uint8_t eepromArray[256];    


/*Funciton protorype for handling errors*/
extern void EEPROM_HandleError(void);  
extern uint8 PSD_Restore(); 



#endif
/* [] END OF FILE */
