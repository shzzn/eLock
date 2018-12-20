#include <project.h>
#include "zmain.h"

CYBLE_API_RESULT_T      bleApiResult;

CY_ISR(InterruptHandler_PWM)
{
    ZWakeup(&pcb_ZClockchain);
    PWM_ClearInterrupt(PWM_INTR_MASK_TC);
}

CY_ISR(InterruptHandler_Finger)
{
    ISR_Finger_ClearPending();

}

/*******************************************************************************
* Function Name: main
********************************************************************************
*
*  The main function performs the following actions:
*   1. Sets up and enables the PWM and its interrupt.
*   2. Starts the PWM Component
*
*******************************************************************************/
int main(void)
{
    MOTOR_A_Write(0);
    MOTOR_B_Write(0);
    MOTOR_C_Write(0);
    MOTOR_D_Write(0);
    
//    DIM;
    Pin_G_Write(1);
    Pin_B_Write(0);

    ZpcbInit();
    
    CyGlobalIntEnable;

    keyBufferIndex =0;
    
    ISR_Finger_StartEx(InterruptHandler_Finger);  
    ISR_PWM_StartEx(InterruptHandler_PWM);

#ifdef ezi2c
    EZI2C_Start();
    EZI2C_EzI2CSetBuffer1(sizeof(CapSense_dsRam), sizeof(CapSense_dsRam),(uint8 *)&CapSense_dsRam);
#endif 

    bleApiResult = CyBle_Start(AppCallBack);
    CapSense_Start();
    PWM_Start();

#ifdef DEBUG_UART
    UART_DEB_Start();
    if(bleApiResult != CYBLE_ERROR_OK)
    {
        DBG_PRINTF("\n\r\t\tCyBle stack initilization FAILED!!! \n\r ");
    }    
#endif
    eepromReturnValue = Em_EEPROM_Init((uint32_t)Em_EEPROM_em_EepromStorage);
    if(eepromReturnValue != CY_EM_EEPROM_SUCCESS)
    {
        ZCreate(&pcb_ZBeep,mdBeep,eeprom_error);
    }
    else
    {
        if(PSD_Restore() == false)
        {
            ZCreate(&pcb_ZBeep,mdBeep,eeprom_error);        
        }
    }
    while(1)
    {
        CyBle_ProcessEvents(); 
        
        if(pcb_ZClockchain.status == ready)	ZClock_Chain();
        if(pcb_ZKey.status == ready) ZKey();
		if(pcb_ZMoto.status == ready) ZMoto();
		if(pcb_ZBeep.status == ready) ZBeep();
        if(pcb_ZManager.status == ready) ZManager();
    }
}

/* [] END OF FILE */
