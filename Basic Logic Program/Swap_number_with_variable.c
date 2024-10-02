/* 21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable . */

#include<stdio.h>
int main()
{
	int a , b , temp;
	
	printf("Enter value a :");
	scanf("%d",&a);
	
	printf("Enter value b :");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nSwap two numbers : %d %d",a,b);
}