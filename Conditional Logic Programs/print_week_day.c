// 33. WAP to input the week number and print week day.

#include<stdio.h>
int main()
{
	int choice;
	
	printf("Enter choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("7 days.\n\n");
				 break;
				 
		case 2 : printf("14 days.\n\n");
				 break;
		
		case 3 : printf("21 days.\n\n");
				 break;
				 
		case 4 : printf("28 days.\n\n");
				 break;
				 
		case 5 : printf("35 days.\n\n");
				 break;
		
		case 6 : printf("42 days.\n\n");
				 break;
				
		case 7 : printf("49 days.\n\n");
				 break;
		
		default : printf("No choice.");
				  break;
	}
}