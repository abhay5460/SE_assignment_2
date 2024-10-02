// 10. WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
int main()
{
	int a , b , c;
	
	printf("\n\nEnter Value of A :");
	scanf("%d",&a);
	
	if(a>0)
		printf("\n\nPositive number.");
	else if(a<0)
		printf("\n\nNegative number.");
	else
		printf("\n\nZero number.");
}