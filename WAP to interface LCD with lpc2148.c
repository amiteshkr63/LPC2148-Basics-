//WAP to interface LCD with lpc2148
//AMITESH KUMAR
//AMSD LAB
//EDT MTECH(2020-22)
#include<lpc214x.h>
#define LCD_DATA 0xff
#define RS 1<<8
#define RW 1<<9
#define EN 1<<10
#define LCD (LCD_DATA|RS|RW|EN)
void lcd_init(void);
void lcd_cmd(char ch);
void lcd_data(char ch);
void lcd_str(char str[16]);
void delay(int k)
{
	int l;
	for(;k>0;k--)
	{
		for(l=0;l<=30000;l++);
	}
}

int main()
{
	PINSEL0=0x0;
	IODIR0=LCD;
	IOCLR0=LCD;
	lcd_init();
	while(1)
	{
		lcd_cmd(0x01);
		lcd_cmd(0x80);
		lcd_str("AMITESH KUMAR");
		lcd_cmd(0xc5);
		lcd_str("AMSD LAB");
		delay(200);
	}
}
void lcd_init(void)
{
	lcd_cmd(0x38);
	lcd_cmd(0x0e);
	lcd_cmd(0x0c);
	lcd_cmd(0x01);
	lcd_cmd(0x80);
}

void lcd_data(char ch)
{
	IOCLR0=LCD_DATA;
	IOSET0=ch;
	IOSET0=RS;
	IOCLR0=RW;
	IOSET0=EN;
	delay(20);
	IOCLR0=EN;
}

void lcd_cmd(char ch)
{
	IOCLR0=LCD_DATA;
	IOSET0=ch;
	IOCLR0=RS;
	IOCLR0=RW;
	IOSET0=EN;
	delay(20);
	IOCLR0=EN;
}

void lcd_str(char str[16])
{
	int k;
	for(k=0;k<16;k++)
	{
		if(str[k]=='\0')
			break;
		lcd_data(str[k]);
		delay(20);
	}
}
//AMITESH KUMAR
//AMSD LAB
//EDT MTECH(2020-22)