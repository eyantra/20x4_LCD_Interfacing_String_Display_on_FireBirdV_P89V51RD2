#include<intrins.h>
#include"p89v51rx2.h"
#include"LCD_20x4.h"
void main(void)
{
 LCD_INIT();
 LCD_CMD(LINE1);
 LCD_WRITE("WELCOME To E-YANTRA");
 LCD_CMD(LINE2);
 LCD_WRITE("ERTS LAB, IIT Bombay");
 LCD_CMD(LINE3);
 LCD_WRITE("This is the demo of");
 LCD_CMD(LINE4);
 LCD_WRITE("4-Line LCD intfacing");

 while(1);

}