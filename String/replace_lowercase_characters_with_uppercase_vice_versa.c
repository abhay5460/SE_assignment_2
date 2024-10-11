// 11. Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[40];
	int i;
	
	printf("\n\n\t Enter the string :");
	gets(str);
	
	printf("\n\n\t The modified sentence is :");
	
	for(i=0;str[i];i++)
	{
		if(islower(str[i]))
		{
			printf(" %c",toupper(str[i]));
		}
		else if(isupper(str[i]))
		{
			printf(" %c",tolower(str[i]));
		}
		else
		{
			printf(" %c",str[i]);
		}
	}
	printf("\n");
}