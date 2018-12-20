#ifndef zble_h

	#define zble_h	


#include "project.h"

#define ble_dubeg    
#define ZBleRecBuffer_length	  14    

extern CYBLE_API_RESULT_T apiResult;
extern uint8 ZBleRecBuffer[ZBleRecBuffer_length],ZBleRecLen;
extern  CYBLE_STATE_T BLE_State;

extern void AppCallBack(uint32 event, void* eventParam);
extern void ZBleRecBuffer_CLR();

#endif
