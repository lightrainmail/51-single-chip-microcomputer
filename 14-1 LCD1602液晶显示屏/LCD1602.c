#include <REGX52.H>


sbit LCD_E=P2^7;
sbit LCD_RS=P2^6;
sbit LCD_RW=P2^5;
#define LCD_DataPort P0


void LCD_Delay()		//@24.000MHz 1ms
{
	unsigned char i, j;

	i = 4;
	j = 225;
	do
	{
		while (--j);
	} while (--i);
}

void LCD_WriteCommand(unsigned char Command)//写入命令
{
	LCD_RS=0;
	LCD_RW=0;
	LCD_DataPort=Command;
	LCD_E=1;
	LCD_Delay();
	LCD_E=0;
	LCD_Delay();
}

void LCD_WriteData(unsigned char Data)//写入数据
{
	LCD_RS=1;
	LCD_RW=0;
	LCD_DataPort=Data;
	LCD_E=1;
	LCD_Delay();
	LCD_E=0;
	LCD_Delay();
}

void LCD_Init()//初始化设置
{
	LCD_WriteCommand(0x38);
	LCD_WriteCommand(0x0c);
	LCD_WriteCommand(0x06);
	LCD_WriteCommand(0x01);
}

void LCD_SetCursor(unsigned Line,unsigned Column)//设置光标位置
{
	if(Line==1)
	{
		LCD_WriteCommand(0x80|(Column-1));
	}
	else
	{
		LCD_WriteCommand(0x80|(Column-1)+0x40);
	}
}

void LCD_ShowChar(unsigned Line,unsigned Column,unsigned Char)//写入字符函数
{
	LCD_SetCursor(Line,Column);
	LCD_WriteData(Char);
}

void LCD_ShowString(unsigned Line,unsigned Column,unsigned char String[])//写入字符串函数
{
	unsigned char i;
	LCD_SetCursor(Line,Column);
	for(i=0;String[i]!='\0';i++)
	{
		LCD_WriteData(String[i]);
	}
}
	
int LCD_Pow(int X,int Y)//次方函数Result=X^Y
{
	unsigned char i;
	int Result=1;
	for(i=0;i<Y;i++)
	{
		Result*=X;
	}
	return Result;
}

void LCD_ShowNumber(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length)//显示10进制数
{
	unsigned char i;
	LCD_SetCursor(Line,Column);
	for(i=Length;i>0;i--)
	{
		LCD_WriteData('0'+Number/LCD_Pow(10,i-1)%10);
	}
}

void LCD_ShowSignedNumber(unsigned char Line,unsigned char Column,int Number,unsigned Length)
{
	unsigned char i;
	unsigned int Number1;
	LCD_SetCursor(Line,Column);
	if(Number>=0)
	{
		LCD_WriteData('+');
		Number1=Number;
	}	
	else
	{
		LCD_WriteData('-');
		Number1=-Number;
	}
	for(i=Length;i>0;i--)
	{
		LCD_WriteData('0'+Number1/LCD_Pow(10,i-1)%10);
	}
}

void LCD_ShowHexNumber(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length)//显示16进制数
{
	unsigned char i;
	unsigned char SingleNumber;
	LCD_SetCursor(Line,Column);
	for(i=Length;i>0;i--)
	{
		SingleNumber=Number/LCD_Pow(16,i-1)%16;
		if(SingleNumber<10)
		{
			LCD_WriteData('0'+SingleNumber);
		}
		else
		{
			LCD_WriteData('A'+SingleNumber-10);
		}
		
	}
}

void LCD_ShowBinNumber(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length)//显示二进制数
{
	unsigned char i;
	LCD_SetCursor(Line,Column);
	for(i=Length;i>0;i--)
	{
		LCD_WriteData('0'+Number/LCD_Pow(2,i-1)%2);
	}
}





















