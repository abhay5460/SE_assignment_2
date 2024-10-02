// 3. WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
	int year ;
	
	printf("\n\n\tEnter the year : ");
	scanf("%d",&year);
	
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("This is a leap year.");
	else
		printf("This is not a leap year.");

}