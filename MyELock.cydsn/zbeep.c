#include <project.h>
#include "zmain.h"

void ZBeep()
{
    pcb_ZBeep.status = excute;
    if(pcb_ZBeep.cycle >0)
    {
        
        switch (pcb_ZBeep.step)
        {
            case 0:
                pcb_ZBeep.cycle --;
                PWM_WriteCompare(5);
                pcb_ZBeep.step ++;
                ZBlock(&pcb_ZBeep,100);
                break;
            case 1:
                PWM_WriteCompare(0);
                pcb_ZBeep.step = 0;
                ZBlock(&pcb_ZBeep,100);
                break;
            default:
                PWM_WriteCompare(0);
                ZDestroy(&pcb_ZBeep);
                break;
        }
    }
    else
    {
        PWM_WriteCompare(0);
        ZDestroy(&pcb_ZBeep); 
    }
}
 