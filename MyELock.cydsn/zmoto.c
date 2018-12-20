#include <project.h>
#include "zmain.h"

/* Data Register */
#define Port1_reg   (* (reg32 *) CYREG_GPIO_PRT1_DR)
#define ZMOTOMask   0xF0

 const uint8	Phase_C[8] = {0x90,0x10,0x30,0x20,0x60,0x40,0xC0,0x80};
 const uint8	Phase_CC[8] ={0x80,0xC0,0x40,0x60,0x20,0x30,0x10,0x90};

void Port1_MOTO_Write(uint8 value)
{
    uint8 drVal = (uint8)(Port1_reg & (uint8)(~ZMOTOMask));
    drVal = drVal | value;
    Port1_reg = (uint32)drVal;
}

    
    
void ZMoto()
{
	pcb_ZMoto.status = excute;
    switch (pcb_ZMoto.mode)
    {
        case mdMOTO_CLOCK:
            if(pcb_ZMoto.step <8)
            {
                Port1_MOTO_Write(Phase_C[pcb_ZMoto.step]);    
                pcb_ZMoto.step ++;
                ZBlock(&pcb_ZMoto,2);
            }
            else
            {
                if(pcb_ZMoto.cycle >0)
                {
                    pcb_ZMoto.cycle --;
                    pcb_ZMoto.step = 0;
                    ZBlock(&pcb_ZMoto,2);
                }
                else
                {
                    Port1_MOTO_Write(0);
                    ZDestroy(&pcb_ZMoto);
                }
            }            
        break;
        case mdMOTO_CCLOCK:
            if(pcb_ZMoto.step <8)
            {
                Port1_MOTO_Write(Phase_CC[pcb_ZMoto.step]);    
                pcb_ZMoto.step ++;
                ZBlock(&pcb_ZMoto,2);
            }
            else
            {
                if(pcb_ZMoto.cycle >0)
                {
                    pcb_ZMoto.cycle --;
                    pcb_ZMoto.step = 0;
                    ZBlock(&pcb_ZMoto,2);
                }
                else
                {
                    Port1_MOTO_Write(0);
                    pcb_ZMoto.mode = mdMOTO_CLOCK;
                    pcb_ZMoto.step = 0;
                    pcb_ZMoto.cycle = MOTO_CYC;
                    ZBlock(&pcb_ZMoto,3000);    //3000ms
                }
            }            
        break;
        default:
            Port1_MOTO_Write(0);
            ZDestroy(&pcb_ZMoto);
        break;
    }
} 