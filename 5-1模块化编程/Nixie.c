#include <regx51.h>
#include "Delay.h"

unsigned char NixieNumber[]={0xfc,0x60,0xda,0xf2,0x66,0xb6,0xbe,0xe0,0xfe,0xe6};

void Nixie(unsigned char Location,Number)
{
	switch(Location)
	{
		case 1:P1_0=0;P1_1=0;P1_2=0;break;
		case 2:P1_0=1;P1_1=0;P1_2=0;break;
		case 3:P1_0=0;P1_1=1;P1_2=0;break;
		case 4:P1_0=1;P1_1=1;P1_2=0;break;
		case 5:P1_0=0;P1_1=0;P1_2=1;break;
		case 6:P1_0=1;P1_1=0;P1_2=1;break;
		case 7:P1_0=0;P1_1=1;P1_2=1;break;
		case 8:P1_0=1;P1_1=1;P1_2=1;break;
	}
	P2=NixieNumber[Number];
	Delay(1);
	P2=0x00;

}
