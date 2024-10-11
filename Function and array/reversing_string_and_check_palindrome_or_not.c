// 8. WAP to reverse a string and check that the string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	
	printf("\n\n\t Enter a string:");
	fgets(str,sizeof(str),stdin);
	str[strlen(str)-1]='\0';
	
	int start=0;
	int end=strlen(str)-1;
	
	while(start<end)
	{
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	if(strcmp(str,str)==0)
	{
		printf("\n\n\t %s is a palindrome.",str);
	}
	else
	{
		printf("\n\n\t %s is not a palindrome.",str);
	}
}