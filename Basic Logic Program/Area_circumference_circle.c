/*3. WAP to Find Area And Circumference of Circle.*/

#include<stdio.h>
int main()
{
	float Area , Circumference ;
	
	printf("Enter the Area :");
	scanf("%f",&Area);
	
	printf("Area of circle : %.2f", 3.14*Area*Area);
	
	printf("\nCircumference of circle : %.2f", 2*3.14*Area);
}