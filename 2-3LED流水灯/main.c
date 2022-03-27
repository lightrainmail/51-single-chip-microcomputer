#include <REGX51.H>
void Delay100ms()		//@24.000MHz
{
	unsigned char i, j, k;


	i = 10;
	j = 31;
	k = 147;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
	while(1)
	{
		P2=0x01;//0000 0001
		Delay100ms();
		P2=0x02;//0000 0010
		Delay100ms();
		P2=0x04;//0000 0100
		Delay100ms();
		P2=0x08;//0000 1000
		Delay100ms();
		P2=0x10;//0001 0000
		Delay100ms();
		P2=0x20;//0010 0000
		Delay100ms();
		P2=0x40;//0100 0000
		Delay100ms();
		P2=0x80;//1000 0000
		Delay100ms();
	}
}