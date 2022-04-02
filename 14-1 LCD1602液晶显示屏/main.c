#include <REGX52.H>
#include "LCD1602.H"
#include "Delay.h"
int main()
{
	LCD_Init();
	LCD_ShowChar(2,3,'\\');
	LCD_ShowString(1,3,"Hello");
	LCD_ShowNumber(1,9,66,2);
	LCD_ShowSignedNumber(1,11,-88,2);
	LCD_ShowHexNumber(2,1,0xA5,2);
	LCD_ShowBinNumber(2,4,0xA5,8);
	LCD_ShowChar(2,13,0xdf);
	LCD_ShowChar(2,14,'C');
	LCD_ShowString(1,16,"Welcome to Chian!");
	while(1)
	{
		LCD_WriteCommand(0x18);
		Delay(50);
	}
}