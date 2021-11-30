//WAP to interface dc motor with lpc2148
//AMITESH KUMAR
//AMSD LAB
//EDT MTECH(2020-22)
#include<lpc214x.h>
void delay(int k)
{
	int j;
	for(;k>0;k--)
	{
		for(j=0;j<=30000;j++);
	}
}
int main()
{
	PINSEL0=0x0;//Making port0 as GPIO
	IODIR0=0xf;//making pin0.0 to pin0.4 output pins
	for(;;)
	{
		IOSET0|=(1<<2)|(1<<0);
		delay(200);
		IOCLR0|=(1<<2)|(1<<0);
		IOSET0|=(1<<3)|(1<<1);
		delay(200);
		IOCLR0=(1<<3)|(1<<1);
	}
}
//AMITESH KUMAR
//AMSD LAB
//EDT MTECH(2020-22)