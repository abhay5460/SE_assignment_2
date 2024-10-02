// 23. WAP to calculate swap 2 numbers with using of multiplication and division .

#include<stdio.h>
int main()
{
	int a , b ;
	
	printf("Enter Value a : ");
	scanf("%d",&a);
	
	printf("Enter Value b : ");
	scanf("%d",&b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("Swap two number without using third variable : %d %d", a ,b);
}