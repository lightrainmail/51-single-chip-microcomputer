#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"
void main()
{
	unsigned char MatNum=0;
	LCD_Init();
	while(1)
	{
		MatNum=MatrixKey();
		if(MatNum)
		{	
			LCD_ShowNum(1,2,MatNum,2 );
		}
	}
} 