#ifndef zkey_h
#define zkey_h
#include <project.h>
    
#define		KEY_POUND	    0x0A
#define     KEY_ASTERISK    0x0B
#define     KEY_SCAN_CYCLE  50  //ms
#define     KEY_SCAN_TIMEOUT    30*1000/KEY_SCAN_CYCLE
extern unsigned	char   KeyNumber;

extern void ZKey(void);
extern cystatus CapSense_ProcessBtnWidgets(void);

#endif