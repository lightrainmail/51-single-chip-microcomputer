#include <REGX51.H>

void main()
{
	P2=0x00;
	while(1)
	{
		if(P3_0==0 || P3_1==0)
			P2_0=1;
		else
			P2_0=0;
	}
}