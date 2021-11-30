//WAP to display 0 to F  on 7 segment display using LPC2148
#include<lpc214x.h>
/*
;EQUIVALENT DECIMAL TO
; EQUIVALENT 7SEGMENT DISPLAY (HEXA FORMAT) (COMMON CATHODE TYPE)
;0             0×3F
;1             0×06
;2             0×5B
;3             0×4F
;4             0×66
;5             0×6D
;6             0×7D
;7             0×07
;8             0×7F
;9             0×6F
;A             0×77
;B             0×7C
;C             0×39
;D             0×5E
;E             0×79
;F             0×71
*/
void delay(int k)
{
int i;
	for(;k>0;k--)
	{
for(i=0;i<60000;i++);
	}
}
int main()
{
int j;
int array[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
PINSEL0=0x0; //making PORT0 as GPIO
IO0DIR=0xffffffff; //Making PORT0 pins as output pins
for(;;)
{
for(j=0;j<=15;j++)
{
IO0SET=array[j];//setting PORT0 pins according to 7segment display(common cathode type)
delay(10); //calling delay function(proper amount of time so that microcontroller have enough time to clear and setting the pin
IO0CLR=array[j];//clearing PORT0 pins according to 7segment display(common cathode type)
delay(10); //calling delay function(proper amount of time so that microcontroller have enough time to clear and setting the pin
}
}
}
