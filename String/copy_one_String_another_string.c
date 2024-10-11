// 7. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20] , str2[20];
	
	printf("\n\n\t Enter the First String :");
	gets(str1);
	
	strcpy(str2,str1);
	
	printf("\n\n\t Result is : %s",str2);
}