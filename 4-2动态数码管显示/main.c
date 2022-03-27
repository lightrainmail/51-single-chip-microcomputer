#include <REGX51.H>
#include <intrins.h>

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
	_nop_();
	_nop_();
	P2=0x00;

}

void main()
{
	while(1)
	{
		Nixie(1,1);
		Nixie(2,2);
		Nixie(3,3);
		Nixie(4,4);
		Nixie(5,5);
		Nixie(6,6);
		Nixie(7,7);
		Nixie(8,8);
	}
}
