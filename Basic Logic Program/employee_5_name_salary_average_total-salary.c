// 24.Accept 5 employees name and salary and count average and total salary .
#include<stdio.h>
int main()
{
	char employee1, employee2, employee3, employee4, employee5 ;
	
	printf("\nEnter First employee: ");
	scanf("%s",&employee1);
	                     
	printf("\nEnter Second employee: ");
	scanf("%s",&employee2);
	
	printf("\nEnter third employee : ");
	scanf("%s",&employee3);
	
	printf("\nEnter Fourth employee : ");
	scanf("%s",&employee4);
	
	printf("\nEnter Fifth employee : ");
	scanf("%s",&employee5);
	
	int salary1, salary2, salary3, salary4, salary5 ;
	
	printf("\nEnter First employee Salary :");
	scanf("%d",&salary1);
	
	printf("\nEnter Second employee Salary :");
	scanf("%d",&salary2);
	
	printf("\nEnter Third employee Salary :");
	scanf("%d",&salary3);
	
	printf("\nEnter Fourth employee Salary :");
	scanf("%d",&salary4);
	
	printf("\nEnter Fifth employee Salary :");
	scanf("%d",&salary5);
	
	int total_salary = salary1 + salary2 + salary3 + salary4 + salary5 ;
	
	printf("Total Salary : %d",&total_salary);
	
	float count_average = total_salary / 5;
	
	printf("Count Average : %.2f",&count_average);
}