/* 18. Calculate person’s Annual salary. */

#include<stdio.h>
int main()
{
	int salary ;
	
	printf("Enter monthly salary :");
	scanf("%d",&salary);
	
	float annual_salary = salary * 12 ;
	printf("Person's Annual salary : %.1f",annual_salary);
}