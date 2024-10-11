// 2. Write a program in C to separate individual characters from a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i;
	
	printf("\n\n\t Enter any string :");
	fgets(str , 55 , stdin);
	str[strlen(str) - 1] = '\0';
	
	printf("\n\n\t Individual characters of the string are : ");
	
	for(i=0;str[i]!='\0';i++)
	{
		printf("\n\n\t Character %d : %c\n",i+1,str[i]);
	}
}