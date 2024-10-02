/* 22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P */

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
	
	float Compound_interest = compound_interest-principal;
	
	printf("Compound interest : %f\n", compound_interest);
	printf("Compound interest  final interest : %f\n",Compound_interest);
}