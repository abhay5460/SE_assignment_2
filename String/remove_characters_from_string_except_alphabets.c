// 13. Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[40];
	int i=0;
	
	printf("\n\n\t Enter a string :");
	gets(str);
	
	printf("\n\n\t The string with only alphabets is :");
	
	for(i=0;str[i];i++)
	{
		if(isalpha(str[i]))
		{
			printf("%c",str[i]);
		}
	}
	printf("\n");
}