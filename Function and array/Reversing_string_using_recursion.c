// 3. WAP to find reverse of string using recursion.
#include<stdio.h>
#include<string.h>
void reverseString(char* str)
{
	if(*str == '\0')
	{
		return;
	}
	else
	{
		reverseString(str + 1);
		printf("%c", *str);
	}
}
int main()
{
	char str[100];
	printf("\n\n\t Enter the string :");
	fgets(str, sizeof(str), stdin);
	str[strlen(str)-1]='\0';
	
	printf("\n\n\t Reverse String :");
	reverseString(str);
	printf("\n");
}