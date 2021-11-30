//WAP to interface dc motor with lpc2148 and configuring with help of pushbutton
//AMITESH KUMAR
//AMSD LAB
//EDT MTECH(2020-22)
#include<lpc214x.h>
int main()
{
	PINSEL0=0x0;// making PORT0 as GPIO
	PINSEL1=0x0;// making PORT0 as GPIO
	PINSEL2=0x0;//making port2 as GPIO
	IO0DIR |=(1<<3) | (1<<4);//making pin0.3 and pin0.4 as output pin
	IO1DIR &=(0<<16) & (0<<17) & (0<<18);//making pin1.16, pin1.17 and pin1.18 as input pin
	for(;;)
	{
		if(!((IO1PIN)&(1<<16)))//checking pushbutton regarding pin1.16 is low or PUSHED
		{
		IO0PIN=1<<3;
		}
		if(!((IO1PIN)&(1<<17)))//checking pushbutton regarding pin1.19 is low or PUSHED
		{
			IO0PIN=1<<4;
		  
	  }
		if(!((IO1PIN)&(1<<18)))//checking pushbutton regarding pin1.18 is low or PUSHED
		{	
		IO0PIN=1<<3 |1<<4;
	  }
	}
}
//AMITESH KUMAR
//AMSD LAB
//EDT MTECH(2020-22)