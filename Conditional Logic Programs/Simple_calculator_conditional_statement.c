// 4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement.
#include<stdio.h>
int main()
{
	int a , b , choice;
	
	printf("\n\nEnter Value of A :");
	scanf("%d",&a);
	
	printf("\n\nEnter Value of B :");
	scanf("%d",&b);
	
	printf("\n\nEnter Choice :");
	scanf("%d",&choice);
	
	if(choice==1)
		printf("\n\nAddition is : %d",a+b);
	else if(choice==2)
		printf("\n\nSubstraction is : %d",a-b);
	else if(choice==3)
		printf("\n\nMultiplication is : %d",a*b);
	else if(choice==4)
		printf("\n\nDivision is : %d",a/b);
	else if(choice==5)
		printf("\n\nModulo is : %d",a%b);
	else
		printf("\n\nNo choice :");
}