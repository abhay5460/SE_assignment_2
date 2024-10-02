// 14.WAP to find the largest of three numbers.

#include<stdio.h>
int main()
{
	int a , b , c;
	
	printf("\n\n Enter Value of A :");
	scanf("%d",&a);
	
	printf("\n\n Enter Value of A :");
	scanf("%d",&b);
	
	printf("\n\n Enter Value of A :");
	scanf("%d",&c);
	
	if(a>b)
		printf("\n\n First Number is Largest.");
	else if(b>c)
		printf("\n\n Second Number is Largest.");
	else
		printf("\n\n Third Number is Largest.");

} 