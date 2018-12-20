#ifndef _ZTIMER_H_
#define _ZTIMER_H_
/*---------------------------------------------------------------------------*/
/* include files                                                             */
/*---------------------------------------------------------------------------*/
//#include "zmain.h"

    /*
#define	RLD_Start		TMCSRL_TRG = 1
#define PWC1_Start		T10CR1_STA = 1
#define PWC1_Stop		T10CR1_STA = 0
#define PWC1_Suspend	T10CR1_HO = 1
#define PWC1_Resume		T10CR1_HO = 0
#define PWC0_Start		T00CR1_STA = 1
#define PWC0_Stop		T00CR1_STA = 0
#define PWC0_Suspend	T00CR1_HO = 1
#define PWC0_Resume		T00CR1_HO = 0

#define ACRecCheckMode	1



extern unsigned int *T1DR;
extern unsigned int *T0DR;
extern unsigned char AcInBit,AC_RDRF,BitSet;
extern unsigned char DC_RDRF;
extern unsigned int RecWaitms,RecWait20ms,RecWaitCount;
extern volatile unsigned int *tibfp;


extern unsigned int T1DR_Temp;
extern unsigned char *RecArryPoint;

typedef struct
{
	unsigned char RecLen;
	unsigned char Array[10];
}Rec_stream;
extern Rec_stream	RecBuf;
*/
extern void ZClock_Chain();
//extern void timer0_init(void);

#endif
