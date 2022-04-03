#include <REGX52.H>

sbit LED=P2^0;

void Delay(unsigned char t)
{
	while(t--);
}

int main()
{
	unsigned char Time;
	unsigned char i;
	while(1)
	{
		for(Time=0;Time<100;Time++)
		{
			for(i=0;i<20;i++)
			{
				LED=1;
				Delay(Time);
				LED=0;
				Delay(100-Time);
			}
			
		}
		for(Time=100;Time>0;Time--)
		{
			for(i=0;i<20;i++)
			{
				LED=1;
				Delay(Time);
				LED=0;
				Delay(100-Time);
			}
			
		}
	}
	
}