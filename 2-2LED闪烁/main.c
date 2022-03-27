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
		P2=0xff;
		Delay100ms();
		P2=0x00;
		Delay100ms();
		
	}
}