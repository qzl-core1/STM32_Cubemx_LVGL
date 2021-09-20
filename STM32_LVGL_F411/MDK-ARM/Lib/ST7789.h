#ifndef __ST7789_H
#define __ST7789_H
#include "main.h"
#include "spi.h"
#include "gpio.h"
#define USE_HORIZONTAL 0  //���ú�������������ʾ 0��1Ϊ���� 2��3Ϊ����
#define LCD_W 240
#define LCD_H 240
void LCD_Init(void);
void LCD_Fill(uint16_t xsta,uint16_t ysta,uint16_t xend,uint16_t yend,uint16_t* color_p);
void LCD_Address_Set(uint16_t x1,uint16_t y1,uint16_t x2,uint16_t y2);
#endif


