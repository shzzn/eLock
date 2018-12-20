#ifndef _ZGLOBAL_H_
#define _ZGLOBAL_H_

//#include "zmain.h"

#define	false	0x00
#define	true	0x01

//typedef enum {msgNone,msgISR_Timer,msgKeyCmd} mssg;

typedef enum {mdNone,
    mdMOTO_CLOCK,mdMOTO_CCLOCK,mdDIM,
    mdBeep,mdMBle,mdMKey,mdKeyScan,mdProx} mv;
typedef enum {destroy,ready,excute,block} sv;
struct tagpcb
{ 
sv status;
mv mode;
unsigned char step;
unsigned char cycle;
unsigned int clk;
//mssg message;
};
typedef struct tagpcb pcb_def;

extern pcb_def pcb_ZClockchain;
extern pcb_def pcb_ZMoto;
extern pcb_def pcb_ZBeep;
extern pcb_def pcb_ZManager;
extern pcb_def pcb_ZKey;
//extern pcb_def pcb_DC_Out;
//extern pcb_def pcb_DC_In;
//extern pcb_def pcb_manager;
//extern pcb_def pcb_lcd;
//extern pcb_def pcb_keyread;
//extern pcb_def pcb_keyprocess;

extern void ZCreate(pcb_def * ppcb,unsigned char mode,unsigned char cyc);
extern void ZBlock(pcb_def * ppcb,unsigned int clk);
extern void ZWakeup(pcb_def * ppcb); //,unsigned char cyc);
extern void ZDestroy(pcb_def * ppcb);
extern void ZpcbInit();


#endif

