// 9. C Program to Check Uppercase or Lowercase or Digit or Special Character.

#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch ;
	
	printf("Enter Value of ch :");
	scanf(" %c",&ch);
	
	if(isupper(ch))
		printf("%c is uppercase. \n\n",ch);
	else if(islower(ch))
		printf("%c is lowercase. \n\n",ch);
	else if(isdigit(ch))
		printf("%cis Digit. \n\n",ch);
	else 
		printf("%c is special character. \n\n",ch);
}