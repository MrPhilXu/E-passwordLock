/**************************************************************************************
*		              LCD1602液晶显示实验												  *
实现现象：	具体接线操作请参考视频教程
			下载程序后插上LCD1602液晶在开发板上，即可显示
注意事项：																				  
***************************************************************************************/

#include "reg52.h"			 //此文件中定义了单片机的一些特殊功能寄存器
#include "lcd.h"

typedef unsigned int u16;	  //对数据类型进行声明定义
typedef unsigned char u8;

u8 Disp[]=" welcome user  ";

/*******************************************************************************
* 函 数 名         : main
* 函数功能		   : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/
void main(void)
{
	u8 i;
	LcdInit();
	for(i=0;i<14;i++)
	{
		LcdWriteData(Disp[i]);	
	}
	while(1);				
}
