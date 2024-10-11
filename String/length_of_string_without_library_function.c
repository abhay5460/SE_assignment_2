// 1. Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i, length;
	
	printf("\n\n\t Enter the string :");
	fgets(str, 50 , stdin);
	str[strlen(str)-1]='\0';
	
	length=0;
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	printf("\n\n\t Length of the string : %d",length);
}