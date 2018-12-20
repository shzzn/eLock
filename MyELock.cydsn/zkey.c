#include <project.h>
#include "zmain.h"

#define CapSense_TOTAL_BTN_WIDGETS 12u
const uint16 No[14]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x100,0x200,0x400,0x800,0x1000,0xFFFF};
//--------------------0,    1,  2,    3,  4,    5,  6,   7,     8,  9,    *,     #,  prox-------------//
uint8 KeyNumber;
uint8 CapProStatus;

uint8 CheckNo(uint16 key)
{
    uint8 i,j=sizeof(No)/2;
    for(i=0;i<j;i++)
    {
        if(i == j-1) break;
        if(key == No[i]) break;
    }
    return i;
}


void ZKey()
{
    uint32 ButtonStatus;
    pcb_ZKey.status = excute;//zzn1930

    if(CapSense_NOT_BUSY==CapSense_IsBusy())
    {
        if(pcb_ZKey.mode == mdKeyScan)
        {            
            if(CYRET_SUCCESS == CapSense_ProcessBtnWidgets())   
            {
                ButtonStatus = CapSense_IsAnyWidgetActive(); // Scan result verification //
                switch(pcb_ZKey.step)
                {
                    case 0:     
                        if(ButtonStatus != 0)   //pressing
                        {
                            KeyNumber = CheckNo(ButtonStatus);
                            if(KeyNumber < 12)
                            {
                                pcb_ZKey.step = 1;
//                                Pin_BackLight_Write(Back_Light);
//                                ZCreate(&pcb_ZBeep,mdBeep,beep_notice);
                                if(pcb_ZManager.status == destroy) ZCreate(&pcb_ZManager,mdMKey,0);
                                else ZWakeup(&pcb_ZManager);
                            }
                        }
                        else
                        {
                            if(pcb_ZKey.cycle == 1)
                            {
                                pcb_ZKey.mode = mdProx;
                                pcb_ZKey.cycle = 0;
                            }   
                        }
                        break;
                    case 1:     
                        if(ButtonStatus == 0)   //release
                        {
                            pcb_ZKey.step = 0;
//                            Pin_BackLight_Write(Back_Dim);
                        } 
                        break;
                    default:
                        break;
                }
            }
        }
        else
        {
            if(CYRET_SUCCESS == CapSense_ProcessWidget(CapSense_PROXIMITY0_WDGT_ID))   
            {
                ButtonStatus = CapSense_IsAnyWidgetActive(); // Scan result verification //
                switch(pcb_ZKey.step)
                {
                    case 0:     
                        if(ButtonStatus == 0x1000)   //pressing
                        {
                            KeyNumber = CheckNo(ButtonStatus);
                            pcb_ZKey.step = 1;
//                            Pin_BackLight_Write(Back_Light);
//                            ZCreate(&pcb_ZBeep,mdBeep,beep_notice);
                            if(pcb_ZManager.status == destroy) ZCreate(&pcb_ZManager,mdMKey,0);
                            else ZWakeup(&pcb_ZManager);
                        }
                        break;
                    case 1:     
                        if(ButtonStatus == 0)   //release
                        {
                            pcb_ZKey.step = 0;
                            pcb_ZKey.mode = mdKeyScan;
//                            Pin_BackLight_Write(Back_Dim);
                        } 
                        break;
                    default:
                        break;
                }
                
            }
        }
//        #ifdef ezi2c
//            CapSense_RunTuner(); // To sync with Tuner application //    
//        #endif
//        CapSense_ScanAllWidgets(); // Start next scan //
//        ZBlock(&pcb_ZKey,KEY_SCAN_CYCLE);
    }
    #ifdef ezi2c
        CapSense_RunTuner(); // To sync with Tuner application //    
    #endif
    CapSense_ScanAllWidgets(); // Start next scan //
    ZBlock(&pcb_ZKey,KEY_SCAN_CYCLE);
}

cystatus CapSense_ProcessBtnWidgets(void)
{
    uint32 wdgtId;
    cystatus result = CYRET_SUCCESS;
    CapSense_FLASH_WD_STRUCT const *ptrFlashWdgt;

    ptrFlashWdgt = CapSense_dsFlash.wdgtArray;

    for (wdgtId = 0u; wdgtId < CapSense_TOTAL_BTN_WIDGETS; wdgtId++)
    {
        if (0uL != CapSense_GET_WIDGET_EN_STATUS(wdgtId))
        {
            switch(CapSense_GET_SENSE_METHOD(ptrFlashWdgt))
            {
            #if (0u != CapSense_TOTAL_CSD_WIDGETS)
                case CapSense_SENSE_METHOD_CSD_E:
                    result = CapSense_DpProcessCsdWidgetRawCounts(ptrFlashWdgt);
                    CapSense_DpProcessCsdWidgetStatus(wdgtId, ptrFlashWdgt);
                    break;
            #endif /* #if (0u != CapSense_TOTAL_CSD_WIDGETS) */

            #if (0u != CapSense_TOTAL_CSX_WIDGETS)
                case CapSense_SENSE_METHOD_CSX_E:
                    result = CapSense_DpProcessCsxWidgetRawCounts(ptrFlashWdgt);
                    CapSense_DpProcessCsxWidgetStatus(wdgtId, ptrFlashWdgt);
                    break;
            #endif /* #if (0u != CapSense_TOTAL_CSX_WIDGETS) */

            #if (0u != CapSense_TOTAL_ISX_WIDGETS)
                case CapSense_SENSE_METHOD_ISX_E:
                    result = CapSense_DpProcessIsxWidgetRawCounts(ptrFlashWdgt);
                    CapSense_DpProcessIsxWidgetStatus(wdgtId, ptrFlashWdgt);
                    break;
            #endif /* #if (0u != CapSense_TOTAL_ISX_WIDGETS) */

            default:
                CYASSERT(0u);
                break;
            }

            #if (CapSense_ENABLE == CapSense_TST_BSLN_DUPLICATION_EN)
                if (CYRET_SUCCESS != result)
                {
                    CapSense_UpdateTestResultBaselineDuplication(wdgtId, result);
                    result = CYRET_BAD_DATA;
                }
            #endif /* (CapSense_ENABLE == CapSense_TST_BSLN_DUPLICATION_EN) */

        }
        ptrFlashWdgt++;
    }
    return result;
}