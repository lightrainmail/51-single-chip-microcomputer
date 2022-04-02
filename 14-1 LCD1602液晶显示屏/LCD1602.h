#ifndef __LCD1602_H__
#define __LCD1602_H__

void LCD_WriteCommand(unsigned char Command);
void LCD_Init();
void LCD_ShowChar(unsigned Line,unsigned Column,unsigned Char);
void LCD_ShowString(unsigned Line,unsigned Column,unsigned char String[]);
void LCD_ShowNumber(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length);
void LCD_ShowSignedNumber(unsigned char Line,unsigned char Column,int Number,unsigned Length);
void LCD_ShowHexNumber(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length);
void LCD_ShowBinNumber(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length);

#endif