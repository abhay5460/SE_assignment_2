// 8. Write a program in C to count the total number of vowels or consonants in a string.
#include<stdio.h>
int main()
{
	char str[50];
	int i=0,vowels=0,consonants=0;
	
	printf("\n\n\t Enter the string : ");
	gets(str);
	
	while(str[i] != '\0')
	{
		if(str[i] == 'A' || str[i] == 'I' || str[i] == 'O' || str[i] == 'E' || str[i] == 'U' || str[i] == 'a' || str[i] == 'i' || str[i] == 'o' || str[i] == 'e' || str[i] == 'u')
		{
			vowels++;
		}
		else
		{
			consonants++;
		}
		i++;
	}
	
	
	printf("\n\n\tVowels in this String : %d",vowels);
	printf("\n\n\tConsonants in this String : %d",consonants);
	
	return 0;
}