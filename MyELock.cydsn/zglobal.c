#include "zglobal.h"

#define zzndebug
unsigned char error_dected;

pcb_def pcb_ZClockchain;
pcb_def pcb_ZMoto;
pcb_def pcb_ZBeep;
pcb_def pcb_ZManager;
pcb_def pcb_ZKey;


void ZCreate(pcb_def * ppcb,unsigned char mode,unsigned char cyc)
{
	if(ppcb -> status == destroy)
	{
		ppcb -> mode = mode;		
		ppcb -> clk = 0;
		ppcb -> step = 0;
		ppcb -> status = ready;
		ppcb -> cycle = cyc;
	}
	else
	{
        error_dected = 1;
	}
}
void ZBlock(pcb_def * ppcb,unsigned int clk)
{
	if(ppcb -> status != destroy)
	{
		ppcb -> status = block;
		ppcb -> clk = clk;
//		ppcb -> message = msgNone;
	}
    else
    {
        error_dected =2;
    }
}

void ZWakeup(pcb_def * ppcb)    //,unsigned char cyc)
{
	if(ppcb -> status == block)
	{
		ppcb -> status = ready;
		ppcb -> clk = 0;		
//		ppcb -> cycle = cyc;
	}
//	else
//	{
//        error_dected = 3;
//	}
}
void ZDestroy(pcb_def * ppcb)
{
	ppcb -> clk = 0;
	ppcb -> mode = mdNone;
	ppcb -> step = 0;
	ppcb -> status = destroy;
	ppcb -> cycle = 0;	
}

void ZpcbInit()
{
    ZDestroy(&pcb_ZClockchain);
    pcb_ZClockchain.status = block;
    ZDestroy(&pcb_ZKey);
    ZCreate(&pcb_ZKey,mdProx,0);

    
    ZDestroy(&pcb_ZMoto);
//    ZDestroy(&pcb_ZBeep); //zzn!
    ZDestroy(&pcb_ZManager);
    
    
}
/*
void ZInitArray(unsigned char *p,unsigned char len,unsigned char dat)
{
	unsigned char i;
	for(i=0;i<len;i++)
	{
		*p=dat;
		p++;
	}
}

void ZcopyArray(unsigned char *pSource,unsigned char *pDest,unsigned char j)
{
	unsigned char i;
	for(i=0;i<j;i++)
	{
		*pDest = *pSource;
		pSource++;
		pDest++;
	}
}
*/