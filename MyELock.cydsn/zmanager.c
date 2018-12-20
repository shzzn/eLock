#include <project.h>
#include "zmain.h"

unsigned char Password_ID[14] = {1,3,5,2,4,6};//,0,0,0,0,0,0};
unsigned char Password_length = sizeof(Password_ID);    //6-1;
unsigned char  keyBuffer[14];
uint8 keyBuf_length = sizeof(keyBuffer);
uint8 keyBufferIndex =0;


uint8 KeyBuff_update(uint8 keyval)
{	
    if(keyBufferIndex < keyBuf_length)
    {
	    *(keyBuffer + keyBufferIndex)=keyval;
	    keyBufferIndex ++;
        return true;
    }
    else return false;
}
unsigned char CHK_Psd_K(unsigned char *password_key)
{
	unsigned char j=0;	
    if(keyBufferIndex == 6)
    {
    	for(j=0;j<keyBufferIndex;j++) //zzn bug when length of password > Password
    	{
    		if(Password_ID[j]!=*(password_key+j))
    		{
    			return false;
    		}
    	}
    	return true;	
    }
    else    
    {
     return false;   
    }
}
unsigned char CHK_Psd_B(unsigned char *password_ble)
{
	unsigned char j=0;	
    if(ZBleRecLen == 6)
    {
    	for(j=0;j<ZBleRecLen;j++) //zzn bug when length of password > Password
    	{
    		if(Password_ID[j]!=*(password_ble+j))
    		{
    			ZBleRecBuffer_CLR();
                return false;
    		}
    	}
        ZBleRecBuffer_CLR();
    	return true;	
    }
    else    
    {
        ZBleRecBuffer_CLR();
        return false;   
    }
}
void ZDestroyManager()
{
    keyBufferIndex =0;
    ZDestroy(&pcb_ZManager);
    Pin_BackLight_Write(Back_Dim);
                    
    pcb_ZKey.cycle = 1;
}

void ZManager()
{
    uint8 k;
    
    pcb_ZManager.status = excute;
	if(pcb_ZManager.mode == mdMBle)
    {
        if(CHK_Psd_B((unsigned char *)&ZBleRecBuffer))
        {
            ZCreate(&pcb_ZMoto,mdMOTO_CCLOCK,MOTO_CYC);
            ZCreate(&pcb_ZBeep,mdBeep,beep_notice);
        }
        else
        {
            ZCreate(&pcb_ZBeep,mdBeep,beep_error); 
        }
//        pcb_ZKey.cycle = 1;
        ZDestroy(&pcb_ZManager);
    }
    else if(pcb_ZManager.mode == mdMKey)
    {
        ZBlock(&pcb_ZManager,WaitKeyTime);//wait next key 3s
        switch (KeyNumber)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                if(false == KeyBuff_update(KeyNumber))
                {
                    ZCreate(&pcb_ZBeep,mdBeep,beep_fault);
                    ZDestroyManager();
                }
                else
                {
                    ZCreate(&pcb_ZBeep,mdBeep,beep_notice);   //notice
                }
                break;
            case 0x55:  //time out
                ZCreate(&pcb_ZBeep,mdBeep,beep_timeout);   //alam
                ZDestroyManager();
                break;
            case 0x0A:  //*
                for(k=0;k<6;k++)
                {
                    eepromArray[k+1]= keyBuffer[k];
                }
                eepromArray[0]=0x5A;
                eepromArray[7]=0xA5;
                eepromReturnValue = Em_EEPROM_Write(EEPROM_START, eepromArray, PSD_EEPROM_SIZE); 
                if(eepromReturnValue != CY_EM_EEPROM_SUCCESS)
                {
                    ZCreate(&pcb_ZBeep,mdBeep,eeprom_error);
                }
                ZCreate(&pcb_ZBeep,mdBeep,beep_notice);
                ZDestroyManager();
                break;
            case 0x0B:  //#
                if(CHK_Psd_K((unsigned char *)&keyBuffer))
                {
                    ZCreate(&pcb_ZMoto,mdMOTO_CCLOCK,MOTO_CYC);
                }
                else
                {
                    ZCreate(&pcb_ZBeep,mdBeep,beep_error);
                }
                ZDestroyManager();
                break;
            case 0x0C:  //prox
//                Pin_BackLight_Write(Back_Light);
                BLE_State = CyBle_GetState();
                if(BLE_State == CYBLE_STATE_DISCONNECTED)
                {
                    apiResult = CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_FAST);
                    #ifdef DEBUG_UART
                        if(CYBLE_ERROR_OK == apiResult)     DBG_PRINTF("StartAdvertisement %x :successful\r\n",CYBLE_ADVERTISING_SLOW);
                        else if(CYBLE_ERROR_INVALID_PARAMETER == apiResult) DBG_PRINTF("StartAdvertisement %x :On passing an invalid parameter\r\n",CYBLE_ADVERTISING_SLOW);   
                        else if(CYBLE_ERROR_INVALID_STATE == apiResult) DBG_PRINTF("StartAdvertisement %x :On calling this function not in Disconnected state",CYBLE_ADVERTISING_SLOW);
                        else DBG_PRINTF("StartAdvertisement %x :return x\r\n",CYBLE_ADVERTISING_FAST);
                    #endif
                }
                break;
            default:
                ZCreate(&pcb_ZBeep,mdBeep,beep_fault);   //alam
                ZDestroyManager();
                break;
        }
    }
}
