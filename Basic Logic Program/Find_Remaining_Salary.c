/* 20. Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary. */

#include<stdio.h>
int main()
{
	int salary ;
	
	printf("Enter monthly salary :");
	scanf("%d",&salary);
	
	int insurance_premium = salary * 10/100;
	
	int loan_installent = salary * 10/100;
	
	int remaining_salary = salary - insurance_premium - loan_installent ;
	
	printf("\nFinaly salary : %d",remaining_salary);
}