#include <REGX52.H>
#include "Delay.h"
unsigned char MatrixKey()
{
	unsigned char MatNumber=0;
	P1=0xff;
	P1_0=0;
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);MatNumber=1;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);MatNumber=2;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);MatNumber=3;}
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);MatNumber=4;}
	P1=0xff;
	P1_1=0;
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);MatNumber=5;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);MatNumber=6;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);MatNumber=7;}
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);MatNumber=8;}
	P1=0xff;
	P1_2=0;
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);MatNumber=9;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);MatNumber=10;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);MatNumber=11;}
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);MatNumber=12;}
	P1=0xff;
	P1_3=0;
	if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);MatNumber=13;}
	if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);MatNumber=14;}
	if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);MatNumber=15;}
	if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);MatNumber=16;}
	return MatNumber;
}