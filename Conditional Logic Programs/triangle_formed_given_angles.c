// 17. Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
int main()
{
	int angle1 , angle2 , angle3 ; 
	
	printf("Enter angle1 :");
	scanf("%d",&angle1);
	
	printf("Enter angle2 :");
	scanf("%d",&angle2);
	
	printf("Enter angle3 :");
	scanf("%d",&angle3);
	
	if(angle1 + angle2 + angle3 == 180)
	{
		printf("The can form a triangle. \n\n");
	}
	else
	{
		printf("The can not form a triangle. \n\n");
	}
}