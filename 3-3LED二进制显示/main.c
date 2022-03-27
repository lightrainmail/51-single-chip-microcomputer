#include <REGX51.H>

void Delay(unsigned int xms)	
{
	unsigned char i, j;
	while(xms--)
	{
	i = 4;
	j = 225;
	do
	{
		while (--j);
	} while (--i);
	}
}


void main()
{
	unsigned char LEDNum=1;
	P2=0x01;
	while(1)
	{
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			LEDNum++;
			P2=LEDNum;
		}
	}
}
