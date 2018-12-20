#include "zmain.h"

//unsigned int *T1DR = (unsigned int *)&T11DR;
//unsigned int *T0DR = (unsigned int *)&T01DR;

//Rec_stream	RecBuf;

//unsigned char *RecArryPoint = (unsigned char *)&RecBuf.Array;


void ZClock_Chain()	//1ms
{
    if(pcb_ZMoto.clk >0)
	{
		pcb_ZMoto.clk --;
		if(pcb_ZMoto.clk == 0)
		{
			ZWakeup(&pcb_ZMoto);
    	}
	}
    if(pcb_ZBeep.clk >0)
	{
		pcb_ZBeep.clk --;
		if(pcb_ZBeep.clk == 0)
		{
			ZWakeup(&pcb_ZBeep);
    	}
	}
    if(pcb_ZKey.clk >0)
	{
		pcb_ZKey.clk --;
		if(pcb_ZKey.clk == 0)
		{
			ZWakeup(&pcb_ZKey);
    	}
	}
    if(pcb_ZManager.clk >0)
	{
        Pin_BackLight_Write(Back_Light);
		pcb_ZManager.clk --;
		if(pcb_ZManager.clk == 0)
		{
            Pin_BackLight_Write(Back_Dim);
            KeyNumber = 0x55;
			ZWakeup(&pcb_ZManager);
    	}
	}
    ZBlock(&pcb_ZClockchain,1);
}

/* [] END OF FILE */
