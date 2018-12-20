#ifndef _ZMANAGER_H_
#define _ZMANAGER_H_

#include <project.h>

#define WaitKeyTime 8000
    
extern unsigned char Password_ID[];// = {1,3,5,2,4,6};//,0,0,0,0,0,0};
extern unsigned char Password_length;
extern unsigned	char keyBuffer[];
extern uint8 keyBufferIndex;

extern void ZManager();
//extern void KeyBuff_CLR();




#endif

