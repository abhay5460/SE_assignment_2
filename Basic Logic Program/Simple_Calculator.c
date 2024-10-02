/* 2. Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo). */

#include<stdio.h>
int main()
{
	int a ,b;
	
	printf("Enter Value a :");
	scanf("%d",&a);
	
	printf("Enter value b :");
	scanf("%d",&b);
	
	printf("\nAddition is : %d", a+b);
	printf("\nSubtraction is : %d", a-b);
	printf("\nMultiplication is : %d", a*b);
	printf("\nDivision is : %d", a/b);
	printf("\nModulo is : %d", a%b);
}