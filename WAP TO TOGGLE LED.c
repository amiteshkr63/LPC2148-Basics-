//WAP to toggle LED
//AMITESH KUMAR
#include<lpc214x.h>
void delay();
int main()
{
PINSEL0=0x0;//MAKING PORT0 as GPIO
	IO0DIR=1;//Making pin0.0 of PORT0 as output pin
	for(;;)
	{
		IO0SET=1;//setting pin0.0
		delay(15);
		IO0CLR=1;//clearing pin0.0
		delay(15);
	}
}
void delay(int k)
{
	int i;
	for(;k>=0;k--)
	{
	for(i=0;i<=30000;i++);
	}
}
//AMITESH KUMAR
//AMSD LAB
//ESD MTECH(2020-22)