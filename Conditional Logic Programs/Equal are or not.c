// 1. Write a C program to accept two integers and check whether they are equal or not.
#include<stdio.h>
int main()
{
	int A , B;
	
	printf("Enter Value of A :");
	scanf("%d",&A);
	
	printf("Enter Value of B :");
	scanf("%d",&B);
	
	if(A==B)
		printf("they are equal.");
	else
		printf("they are not equal.");
	
	return 0;
}