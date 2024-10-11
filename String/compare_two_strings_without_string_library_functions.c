// 5. Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
int main()
{
	char str1[25], str2[25];
	int i=0;
	
	printf("\n\n\t Enter the First String :");
	scanf("%s",&str1);
	
	printf("\n\n\t Enter the Second String :");
	scanf("%s",&str2);
	
	while(str1[i] != '\0' && str2[i] != '\0')
	{
		if(str1[i] != str2[i])
		{
			break;
		}
		i++;
	}
	
	if(str1[i]=='\0' && str2[i]=='\0')
	{
		printf("\n\n\t The String are equal.");
	}
	else
	{
		printf("\n\n\t The String are not equal.");
	}
}