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
	unsigned int LEDNum=0;
	P2=0x01;
	while(1)
	{
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			if(LEDNum==7)
				LEDNum=0;
			else
				LEDNum++;
			P2=0x01<<LEDNum;
		}
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			if(LEDNum==0)
				LEDNum=7;
			else
				LEDNum--;
			P2=0x01<<LEDNum;
		}
		
	}
}