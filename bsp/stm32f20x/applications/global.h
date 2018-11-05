#ifndef __GLOBAL_H
#define __GLOBAL_H
#include "stm32f2xx.h"
#include <rtthread.h>
///////////////////////////////////////////////////////////////////
//#define S0_ctrl  2
//#define S1_ctrl  3
//#define S2_ctrl  0
//#define S3_ctrl  1


typedef struct     
{
  rt_uint8_t    SF_SEL;                             //��Ƶѡ��  ����
	rt_uint16_t   GateTime;                         //�ο�բ��ʱ�� ��λmS 
  rt_uint32_t   StdFreq;                            //��Ƶֵ    ��λHZ
}FreqMeas_Para;      //������²���






#endif
