// 12. WAP to find maximum number among 3 numbers using ternary operator.

#include<stdio.h>
int main()
{
	int a=200 , b=3 , c=30 ;
	
	int max = ((a > b ) ? (a > c ) ? a : c : (b > c ) ? b : c );
	
	printf("Answer is : %d",max);
}