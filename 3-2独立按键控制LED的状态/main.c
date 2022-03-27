#include <REGX51.H>

void Delay(unsigned int xms)	
{
	unsigned char i, j;
	while(xms)
	{
		i = 4;
		j = 225;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}

void main()
{
	P2=0x00;
	while(1)
	{
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			P2_0=~P2_0;
		}
	}
}