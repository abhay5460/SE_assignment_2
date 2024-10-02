// 34. Accept month number and display month name.

#include<stdio.h>
int main()
{
	int choice ;
	
	printf("Enter choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("January. \n\n");
				 break;
		
		case 2 : printf("February. \n\n");
				 break;
				 
		case 3 : printf("March. \n\n");
				 break;
				 
		case 4 : printf("April. \n\n");
				 break;
				
		case 5 : printf("May. \n\n");
				 break;
				 
		case 6 : printf("June. \n\n");
				 break;
		
		case 7 : printf("July. \n\n");
				 break;
		
		case 8 : printf("August. \n\n");
				 break;
		
		case 9 : printf("September. \n\n");
				 break;
				 
		case 10 : printf("Octomber. \n\n");
				 break;
				 
		case 11 : printf("November. \n\n");
				 break;
				 
		case 12 : printf("December. \n\n");
				 break;
				 
		default : printf("No Choice. \n\n");
				 break;
	}
}