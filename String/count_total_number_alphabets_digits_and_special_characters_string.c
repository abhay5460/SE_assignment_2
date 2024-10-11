// 6. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
	char str[50];
	int i=0 , alphabets=0 , digits=0 , special_char=0;
	
	printf("\n\n\t Enter the String : ");
	gets(str);
	
	while(str[i]!='\0')
	{
		if((str[i] >= 'A' && str[i] <= 'Z' ) || (str[i] >= 'a' && str[i] <= 'z'))
		{
			alphabets++;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			digits++;
		}
		else
		{
			special_char++;
		}
		i++;
	}
	
	printf("\n\n\t Alphabets in this string : %d",alphabets);
	printf("\n\n\t Digits in this string : %d",digits);
	printf("\n\n\t Special characters in this string : %d",special_char);
}