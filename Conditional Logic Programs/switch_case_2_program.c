/* 37. WAP to show
i. Monday to Sunday using switch case.
ii. Vowel or Consonant using switch case. */

#include<stdio.h>
int main()
{
	char ch ;
	int choice;
	
	/*printf("\n\nEnter Choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("Monday.\n\n");
				 break;
				 
		case 2 : printf("Tuesday. \n\n");
				 break;
		
		case 3 : printf("Wednesday. \n\n");
				 break;
				 
		case 4 : printf("Thursday. \n\n");
				 break;
				 
		case 5 : printf("Friday. \n\n");
				 break;
			
		case 6 : printf("Saturday. \n\n");
				 break;
		
		case 7 : printf("Sunday. \n\n");
				 break;
	}*/
	
	printf("\n\n Enter Choice : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a' :
		case 'i' :
		case 'e' :
		case 'o' :
		case 'u' :
		case 'A' :
		case 'I' :
		case 'E' :
		case 'O' :
		case 'U' :
					printf("\n\n %c Vowel is . \n",ch);
					break;
		default :
					if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
					{
						printf("\n\n %c is a constant.\n",ch);
					}
					else
					{
						printf("%c is no constant or vowel.\n\n");
					}
		
	}
}