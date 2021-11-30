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
PINSEL0=0x0;//making port0 as GPIO
	IODIR0|=0xf;//making pin0.0 to pin0.3 as output pin
	for(;;)
	{
	IOSET0|=0x6;
	delay(100);;
	IOCLR0|=0x6;
		IOSET0|=0x3;
	delay(100);;
		IOCLR0|=0x3;
		IOSET0|=0x9;
		delay(100);;
		IOCLR0|=0x9;
		IOSET0|=0xc;
		delay(100);;
		IOCLR0|=0xc;
	}
}
//AMITESH KUMAR
//AMSD LAB
//EDT MTECH(2020-22)