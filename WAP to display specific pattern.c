//WAP to display specific pattern using LPC2148
//AMITESH KUMAR

#include<lpc214x.h> //header file
void delay(int k) //delay function
{
unsigned int i;
	for(;k>=0;k--)
	{
for(i=0;i<30000;i++);
	}
}
int main() //main program
{
    PINSEL0=0x0; //using PORT0 as GPIO pins
    IO0DIR=0xFFFFFFFF; //Enabling pins of PORT0 for o/p
    while(1) //infinite loop
    {
        IO0SET=0XAA;  //making o/p high pin 1,3,5,7
        delay(30); //calling delay funcn
        IO0CLR=0xAA;//clearing o/p high pin 1,3,5,7
			delay(30);
        IO0SET=0X55;//making o/p high pin 0,2,4,6
        delay(30); //calling delay funcn
        IO0CLR=0x55; //clearing o/p high pin 1,3,5,7
			delay(30);
    }
}

/*
AMITESH KUMAR
AMSD LAB
ESD MTECH(2020-22)
*/
