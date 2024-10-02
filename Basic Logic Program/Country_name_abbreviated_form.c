/* 16.Convert country’s name in abbreviate form. */

#include<stdio.h>
int main()
{
	char country[20];
	
	printf("Enter the value :");
	scanf("%s",&country);
	
	printf("Country Name : %c . %c", country[0], country[4]);
}