/* 6. Find area of Triangle Formula : A = 1/2 × b × h */

#include<stdio.h>
int main()
{
	float b , h , Triangle;
	
	printf("Enter Value b :");
	scanf("%f",&b);
	
	printf("Enter Value h :");
	scanf("%f",&h);
	
	Triangle = (b*h)*1/2;
	
	printf("Area of Triangle : %.2f",Triangle);
	
}