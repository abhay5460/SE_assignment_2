/* 19.Calculate compound interest .*/

#include<stdio.h>
#include<math.h>
int main()
{
	float principal , rate , time , compound_interest;
	
	printf("Enter principal salary :");
	scanf("%f",&principal);
	
	printf("Enter rate : ");
	scanf("%f",&rate);
	
	printf("Enter time : ");
	scanf("%f",&time);
	
	compound_interest = principal * (pow((1 + rate/100), time));
	
	printf("Compound interest : %f\n", compound_interest);
}
	
	
	
	
	
	
	
	
	
	
	
	
    