//WAP to control led via SWITCH 
//AMITESH KUMAR
//AMSD LAB
//EDT MTECH(2020-22)
#include<lpc214x.h>
int main()
{
	PINSEL0=0x0; //making port0 as GPIO
	IO0DIR &=0xfffffffe;//making pin0.0 as input
	IO0DIR |=0x2;//making pin0.1 as output

	for(;;)
{
	IOPIN0|=(IOPIN0<<1);//making pin0.1,s output equal pin0.0's input value
}
}
//AMITESH KUMAR
//AMSD LAB
//EDT MTECH(2020-22)