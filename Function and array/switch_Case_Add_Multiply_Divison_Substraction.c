// 2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven).

#include<stdio.h>
int main()
{
	int a , b , choice;
	
	printf("\n\n Enter First Number :");
	scanf("%d",&a);
	
	printf("\n\n Enter Second Number :");
	scanf("%d",&b);
	
	printf("\n\n Enter the number :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("\n\n Addition is : %d",a+b);
				 break;
				 
		case 2 : printf("\n\n Multiplication is : %d",a*b);
				 break;
				
		case 3 : printf("\n\n Substraction is : %d",a-b);
				 break;
				 
		case 4 : printf("\n\n Division is : %d",a/b);
				 break;
				 
		default : printf("\n\n No choice : ");
				 break;
	}
}