/* 17. Calculate person’s insurance premium based on salary. */

#include<stdio.h>
int main()
{
	int salary , insu_premium , final_salary;
	
	printf("Enter Salary :");
	scanf("%d",&salary);
	
	insu_premium = salary * 10/100 ;
	
	final_salary = salary - insu_premium;
	
	printf("\n insurance premium based percentage : %d",insu_premium);
	
	printf("\nfinal salary insurance based salary : %d", final_salary);
}