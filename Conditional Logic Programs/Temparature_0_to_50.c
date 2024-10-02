/* 16. Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot. */

#include<stdio.h>
int main()
{
	float Temp ;
	
	printf("\n\nEnter Value of temperature : ");
	scanf(" %f",&Temp);
	
	if(Temp<0)
		printf("\n\nFreezing Weather.");
	else if(Temp>=0 && Temp<=10)
		printf("\n\nVery Cold Weather.");
	else if(Temp>=10 && Temp<=20)
		printf("\n\nCold Weather.");
	else if(Temp>=20 && Temp<=30)
		printf("\n\nNormal in Temp.");
	else if(Temp>=30 && Temp<=40)
		printf("\n\nIts Hot.");
	else if(Temp>=40)
		printf("\n\nIts Very Hot.");
	else
		printf("\n\n No choice.");
	
	
}