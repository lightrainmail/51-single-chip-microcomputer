#include <REGX51.H>

void Delay1ms(unsigned int xms)		//@24.000MHz
{
	unsigned char i, j;
	while(xms)
	{
		i = 24;
		j = 85;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}

void main()
{
	while(1)
	{
		P2=0x01;//0000 0001
		Delay1ms(10);
		P2=0x02;//0000 0010
		Delay1ms(10);
		P2=0x04;//0000 0100
		Delay1ms(10);
		P2=0x08;//0000 1000
		Delay1ms(10);
		P2=0x10;//0001 0000
		Delay1ms(10);
		P2=0x20;//0010 0000
		Delay1ms(10);
		P2=0x40;//0100 0000
		Delay1ms(10);
		P2=0x80;//1000 0000
		Delay1ms(10);
	}
}
	