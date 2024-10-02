// 11. WAP to find number is even or odd using ternary operator.

#include<stdio.h>
int main()
{
	int a;
	
	printf("\n\nEnter Value of A :");
	scanf("%d",&a);
	
	a%2==0 ? printf(" \n\n %d is Even Number.",a) : printf(" \n\n %d is odd number.",a);
	
}