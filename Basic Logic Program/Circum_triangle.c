/* 9. Find circumference of Triangle formula : triangle = a + b + c */

#include<stdio.h>
int main()
{
	int a , b , c , triangle ;
	
	printf("Enter Value of a :");
	scanf("%d",&a);
	
	printf("Enter Value of b :");
	scanf("%d",&b);
	
	printf("Enter Value of c :");
	scanf("%d",&c);
	
	triangle=a+b+c;
	
	printf("Circumference of triangle : %d",triangle);
}