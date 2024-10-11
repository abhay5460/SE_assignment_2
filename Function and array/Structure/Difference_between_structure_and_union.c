/* Difference between structure and union for employee.
	Structures in C is a user-defined data type available in C that allows to combining of data items
	of different kinds. Structures are used to represent a record. 
	union in C that allows storing different data types in the same memory location.*/
#include<stdio.h>
struct Employee
{
	int eid;
	char ename[50];
	int salary;	
}s;
union Employees
{
	char decription[50];
}H;
int main()
{
	printf("\n\n\t Enter the Employee number : ");
	scanf("%d",&s.eid);
	
	printf("\n\n\t Enter the Employee name : ");
	scanf("%s",&s.ename);
	
	printf("\n\n\t Enter the Employee salary : ");
	scanf("%d",&s.salary);
	
	printf("\n\n\t Enter the Employee Decription : ");
	scanf("%s",&H.decription);
	
	printf("\n\n\t Employee number is : %d",s.eid);
	printf("\n\n\t Employee name is : %s",s.ename);
	printf("\n\n\t Employee salary is : %d",s.salary);
	printf("\n\n\t Employee Decription is : %s",gets(H.decription));
}