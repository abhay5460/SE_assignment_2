// 6. Find the Character Is Vowel or Not.

#include<stdio.h>
int main()
{
	char vowel;
	
	printf("Enter Value of Vowel :");
	scanf("%c",&vowel);
	
	if(vowel=='a' || vowel=='i' || vowel=='e' || vowel=='o' || vowel=='u')
		printf("This is a Vowel.");
	else if(vowel=='A' || vowel=='I' || vowel=='E' || vowel=='O' || vowel=='U')
		printf("This is a Capital Vowel.");
	else
		printf("This is a Constants.");
}