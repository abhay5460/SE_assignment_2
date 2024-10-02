// 13.WAP to find minimum number among 3 numbers using ternary operator.

#include<stdio.h>
int main()
{
	int a=30 , b=40 , c=50;
	
	int min = ((a<b) ? (a<c) ? a : c : (b < c) ? b : c);
	
	printf("Answer is : %d",min);
}