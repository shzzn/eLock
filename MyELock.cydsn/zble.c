/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "zmain.h"

CYBLE_GATTS_WRITE_REQ_PARAM_T *wrReqParam;
CYBLE_API_RESULT_T apiResult;
CYBLE_GAP_BD_ADDR_T localAddr;
CYBLE_GAP_AUTH_INFO_T *authInfo;

CYBLE_STATE_T BLE_State;
uint8 ZBleRecBuffer[ZBleRecBuffer_length];
uint8 ZBleRecLen,m;

//uint8 F_BLE;
//uint8 order;
uint8 ACK[14] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e};
uint8 arry[4];
//uint8 * BLE_ACK = &ACK

void ZBleRecBuffer_CLR()
{		
	uint8 i=0;
	for(i=0;i<ZBleRecBuffer_length;i++)
	{
		ZBleRecBuffer[i]=0;
	}
}

void AppCallBack(uint32 event, void* eventParam)
{
 //   uint8 i;
    wrReqParam = (CYBLE_GATTS_WRITE_REQ_PARAM_T*)eventParam;
    #ifdef DEBUG_UART
                //Set32ByPtr(arry,event);
                DBG_PRINTF("Event No: %#x --- ",(uint8)event);
    #endif
    switch (event)
	{
        //**********************************************************
        //              General Events  (0x01 to 0x1F)
        //*********************************************************
		case CYBLE_EVT_STACK_ON: // This event received when component is Started
            // Enter in to discoverable mode so that remote can search it.
            apiResult = CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_FAST);
            #ifdef DEBUG_UART
                if(CYBLE_ERROR_OK == apiResult)     DBG_PRINTF("StartAdvertisement %x :successful\r\n",CYBLE_ADVERTISING_FAST);
                else if(CYBLE_ERROR_INVALID_PARAMETER == apiResult) DBG_PRINTF("StartAdvertisement %x :On passing an invalid parameter\r\n",CYBLE_ADVERTISING_FAST);   
                else if(CYBLE_ERROR_INVALID_STATE == apiResult) DBG_PRINTF("StartAdvertisement %x :On calling this function not in Disconnected state\r\n",CYBLE_ADVERTISING_FAST);
                else DBG_PRINTF("StartAdvertisement %x :return x\r\n",CYBLE_ADVERTISING_FAST);

            #endif
            break;
		case CYBLE_EVT_TIMEOUT: //2
            #ifdef DEBUG_UART
                DBG_PRINTF("TIMEOUT\r\n");
            #endif
			break;
		case CYBLE_EVT_HARDWARE_ERROR:    //3 This event indicates that some internal HW error has occurred.
            #ifdef DEBUG_UART
                DBG_PRINTF("Hardware Error \r\n");
            #endif
			break;
        case CYBLE_EVT_HCI_STATUS:  //4
			#ifdef DEBUG_UART
                DBG_PRINTF("HCI_STATUS: %x \r\n", *(uint8 *)eventParam);
            #endif
            break;
        case CYBLE_EVT_STACK_BUSY_STATUS:
            #ifdef DEBUG_UART
                DBG_PRINTF("STACK_BUSY_STATUS: %x \r\n", *(uint8 *)eventParam);
            #endif
            break;
        case CYBLE_EVT_MEMORY_REQUEST:
            #ifdef DEBUG_UART
                DBG_PRINTF("MEMORY_REQ \r\n");
            #endif
            break;
        /**********************************************************
        *                       GAP Events (0x20 to 0x3F)
        ***********************************************************/
        case CYBLE_EVT_GAP_AUTH_REQ:    //0x21
            #ifdef DEBUG_UART
                DBG_PRINTF("AUTH_REQ: security=%x, bonding=%x, ekeySize=%x, err=%x \r\n", 
                (*(CYBLE_GAP_AUTH_INFO_T *)eventParam).security, 
                (*(CYBLE_GAP_AUTH_INFO_T *)eventParam).bonding, 
                (*(CYBLE_GAP_AUTH_INFO_T *)eventParam).ekeySize, 
                (*(CYBLE_GAP_AUTH_INFO_T *)eventParam).authErr);
            #endif
            break;
        case CYBLE_EVT_GAP_PASSKEY_ENTRY_REQUEST:   //0x22
            #ifdef DEBUG_UART
                DBG_PRINTF("PASSKEY_ENTRY_REQ \r\n");
            #endif
            break;
        case CYBLE_EVT_GAP_PASSKEY_DISPLAY_REQUEST: //0x23
            #ifdef DEBUG_UART
                DBG_PRINTF("PASSKEY_DISPLAY_REQ %6.6ld \r\n", *(uint32 *)eventParam);
            #endif
            break;
        case CYBLE_EVT_GAP_AUTH_COMPLETE:       //0x24
            #ifdef DEBUG_UART
                authInfo = (CYBLE_GAP_AUTH_INFO_T *)eventParam;
                (void)authInfo;
                DBG_PRINTF("AUTH_COMPLETE: security:%x, bonding:%x, ekeySize:%x, authErr %x \r\n", 
                    authInfo->security, authInfo->bonding, authInfo->ekeySize, authInfo->authErr);
            #endif
            break;
        case CYBLE_EVT_GAP_AUTH_FAILED:     //0x25
            #ifdef DEBUG_UART
                DBG_PRINTF("AUTH_FAILED: %x \r\n", *(uint8 *)eventParam);
            #endif
            break;
        case CYBLE_EVT_GAPP_ADVERTISEMENT_START_STOP:   //0x26
            BLE_State = CyBle_GetState();
            #ifdef DEBUG_UART
                DBG_PRINTF("GAPP_ADVERTISEMENT_START_STOP, State: ");
                if(BLE_State == CYBLE_STATE_INITIALIZING) DBG_PRINTF("Initializing\r\n");
                else if(BLE_State == CYBLE_STATE_CONNECTED) DBG_PRINTF("Peer device is connected\r\n");
                else if(BLE_State == CYBLE_STATE_ADVERTISING) DBG_PRINTF("Advertising\r\n");
                else if(BLE_State == CYBLE_STATE_DISCONNECTED)
                {
                    DBG_PRINTF("Essentially idle\r\n");
//                    apiResult = CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_SLOW);
//                    if(CYBLE_ERROR_OK == apiResult)     DBG_PRINTF("StartAdvertisement %x :successful\r\n",CYBLE_ADVERTISING_SLOW);
//                    else if(CYBLE_ERROR_INVALID_PARAMETER == apiResult) DBG_PRINTF("StartAdvertisement %x :On passing an invalid parameter\r\n",CYBLE_ADVERTISING_SLOW);   
//                    else if(CYBLE_ERROR_INVALID_STATE == apiResult) DBG_PRINTF("StartAdvertisement %x :On calling this function not in Disconnected state",CYBLE_ADVERTISING_SLOW);
//                    else DBG_PRINTF("StartAdvertisement %x :return x\r\n",CYBLE_ADVERTISING_SLOW);
                }
                else if(BLE_State == CYBLE_STATE_STOPPED) DBG_PRINTF("BLE is turned off\r\n");
                else DBG_PRINTF("Unknow !\r\n");
//                if(CYBLE_STATE_DISCONNECTED == CyBle_GetState())
//                {   
//                    // Fast and slow advertising period complete, go to low power  
//                    // mode (Hibernate mode) and wait for an external
//                    // user event to wake up the device again
//                    DBG_PRINTF("BLE Hibernate \r\n");   //zzn!
//                    while((UART_DEB_SpiUartGetTxBufferSize() + UART_DEB_GET_TX_FIFO_SR_VALID) != 0);
//                    Pin_WAKEUP_ClearInterrupt();
//                    Wakeup_Interrupt_ClearPending();
//                    Wakeup_Interrupt_Start();
//                    CySysPmHibernate();
//                }
            #endif
            break;

        case CYBLE_EVT_GAP_DEVICE_CONNECTED:    //0x27
            #ifdef DEBUG_UART
                DBG_PRINTF("GAP_DEVICE_CONNECTED: %x \r\n", *(uint8 *)eventParam);
            #endif
            break;
        case CYBLE_EVT_GAP_DEVICE_DISCONNECTED:          //0x28
            // Put the device to discoverable mode so that remote can search it.
            //apiResult = CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_FAST);
            #ifdef DEBUG_UART
                DBG_PRINTF("GAP_DEVICE_DISCONNECTED\r\n");
//                if(CYBLE_ERROR_OK == apiResult)     DBG_PRINTF("StartAdvertisement %x :successful\r\n",CYBLE_ADVERTISING_FAST);
//                else if(CYBLE_ERROR_INVALID_PARAMETER == apiResult) DBG_PRINTF("StartAdvertisement %x :On passing an invalid parameter\r\n",CYBLE_ADVERTISING_FAST);   
//                else if(CYBLE_ERROR_INVALID_STATE == apiResult) DBG_PRINTF("StartAdvertisement %x :On calling this function not in Disconnected state",CYBLE_ADVERTISING_FAST);
//                else DBG_PRINTF("StartAdvertisement %x :return x\r\n",CYBLE_ADVERTISING_FAST);
            #endif
            break;
        case CYBLE_EVT_GAP_ENCRYPT_CHANGE:  //0x29
            #ifdef DEBUG_UART
                DBG_PRINTF("ENCRYPT_CHANGE: %x \r\n", *(uint8 *)eventParam);
            #endif
            break;
        case CYBLE_EVT_GAP_CONNECTION_UPDATE_COMPLETE:  //CYBLE_EVT_GAPC_CONNECTION_UPDATE_COMPLETE: 0x2a
            #ifdef DEBUG_UART
                DBG_PRINTF("CONNECTION_UPDATE_COMPLETE: %x \r\n", *(uint8 *)eventParam);
            #endif
            break;
        case CYBLE_EVT_GAP_KEYINFO_EXCHNGE_CMPLT:
            #ifdef DEBUG_UART
                DBG_PRINTF("GAP_KEYINFO_EXCHNGE_CMPLT \r\n");
            #endif
            break;
        case CYBLE_EVT_GAP_NUMERIC_COMPARISON_REQUEST:
            #ifdef DEBUG_UART
                DBG_PRINTF(" \r\n");
            #endif
            break;
        case CYBLE_EVT_GAP_KEYPRESS_NOTIFICATION:
            #ifdef DEBUG_UART
                DBG_PRINTF(" \r\n");
            #endif
            break;
        case CYBLE_EVT_GAP_OOB_GENERATED_NOTIFICATION:
            #ifdef DEBUG_UART
                DBG_PRINTF(" \r\n");
            #endif
            break;
        case CYBLE_EVT_GAP_DATA_LENGTH_CHANGE:
            #ifdef DEBUG_UART
                DBG_PRINTF(" \r\n");
            #endif
            break;
        case CYBLE_EVT_GAP_ENHANCE_CONN_COMPLETE:
            #ifdef DEBUG_UART
                DBG_PRINTF(" \r\n");
            #endif
            break;
        case CYBLE_EVT_GAPC_DIRECT_ADV_REPORT:
            #ifdef DEBUG_UART
                DBG_PRINTF(" \r\n");
            #endif
            break;
        case CYBLE_EVT_GAP_SMP_NEGOTIATED_AUTH_INFO:
            #ifdef DEBUG_UART
                DBG_PRINTF(" \r\n");
            #endif
            break;
	    case CYBLE_EVT_GAP_CONN_ESTB:
            #ifdef DEBUG_UART
                DBG_PRINTF(" \r\n");
            #endif
            break;

        //*********************************************************
        //                       GATT Events  (0x40 to 6F)
        //*********************************************************
        case CYBLE_EVT_GATT_CONNECT_IND:            //0x41
            #ifdef DEBUG_UART
                DBG_PRINTF("GATT_CONNECT_IND:connHandle attID & dbHandle %x, %x \r\n",
                    cyBle_connHandle.attId, cyBle_connHandle.bdHandle);
            #endif
            break;
        case CYBLE_EVT_GATT_DISCONNECT_IND:                
            #ifdef DEBUG_UART
                DBG_PRINTF("GATT_DISCONNECT_IND \r\n");
            #endif
            break;
        case CYBLE_EVT_GATTS_XCNHG_MTU_REQ:
            #ifdef DEBUG_UART
                DBG_PRINTF("XCNHG_MTU_REQ \r\n");
            #endif
            break;
        case CYBLE_EVT_GATTS_WRITE_REQ: //event 0x4c
            #ifdef DEBUG_UART
                DBG_PRINTF("EVT_GATT_WRITE_REQ: %x = ",
                    ((CYBLE_GATTS_WRITE_REQ_PARAM_T *)eventParam)->handleValPair.attrHandle);
                ShowValue(&((CYBLE_GATTS_WRITE_REQ_PARAM_T *)eventParam)->handleValPair.value);
                (void)CyBle_GattsWriteRsp(((CYBLE_GATTS_WRITE_REQ_PARAM_T *)eventParam)->connHandle);   //zzn!
            #endif
            // This event is received when Central device sends a Write command on an Attribute
            if(CYBLE_CUSTOM_SERVICE_CUSTOM_CHARACTERISTIC_CHAR_HANDLE == wrReqParam->handleValPair.attrHandle)
            {
                ZBleRecLen = wrReqParam->handleValPair.value.len;
                //for(m=0;m<ZBleRecBuffer_length;m++)
                for(m=0;m<=ZBleRecLen;m++)
                {
                    ZBleRecBuffer[m] = wrReqParam->handleValPair.value.val[m];
                }
                if(pcb_ZManager.status == destroy)
                {
                    ZCreate(&pcb_ZManager,mdMBle,0);   
                }
               wrReqParam->handleValPair.attrHandle = CYBLE_CUSTOM_SERVICE_CUSTOM_CHARACTERISTIC_CHAR_HANDLE;
	           //wrReqParam->handleValPair.value.val = wrReqParam->handleValPair.value.val;
                ////wrReqParam->handleValPair.value.val = & ACK[0];
	           //wrReqParam->handleValPair.value.len = ZBleRecLen;    //ZBleRecBuffer_length;         
               CyBle_GattsWriteAttributeValue(&wrReqParam->handleValPair,0,&wrReqParam->connHandle,0);
            }
            CyBle_GattsWriteRsp(wrReqParam->connHandle);           
            break;
        case CYBLE_EVT_GATTS_WRITE_CMD_REQ:
        case CYBLE_EVT_GATTS_PREP_WRITE_REQ: 
        case CYBLE_EVT_GATTS_EXEC_WRITE_REQ:
        case CYBLE_EVT_GATTS_HANDLE_VALUE_CNF:
        case CYBLE_EVT_GATTS_DATA_SIGNED_CMD_REQ:
            #ifdef DEBUG_UART
                DBG_PRINTF("GATTS_xxx \r\n");
            #endif
            break;
        case CYBLE_EVT_GATTS_READ_CHAR_VAL_ACCESS_REQ:  //event 0x57
            #ifdef DEBUG_UART
                DBG_PRINTF("GATTS_READ_CHAR_VAL_ACCESS_REQ \r\n");
            #endif
            break;
        case CYBLE_EVT_GATTS_INDICATION_ENABLED:
            #ifdef DEBUG_UART
                DBG_PRINTF("GATTS_INDICATION_ENABLED \r\n");
            #endif
            break;
        case CYBLE_EVT_GATTS_INDICATION_DISABLED:
            #ifdef DEBUG_UART
                DBG_PRINTF("GATTS_INDICATION_DISABLED \r\n");
            #endif
            break;
		//********************************************************//
        //                       Other Events                     //
        //********************************************************//
        case CYBLE_EVT_PENDING_FLASH_WRITE:
            #ifdef DEBUG_UART
                DBG_PRINTF("PENDING_FLASH_WRITE \r\n");
            #endif
            break;
            
        default:
            #ifdef DEBUG_UART
                DBG_PRINTF("default: \r\n");
            #endif
			break;
	}
}


/* [] END OF FILE */
