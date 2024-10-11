// 9. Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("\n\n\t Enter the number of strings :");
	scanf("%d",&n);
	
	char strings[n][100];
	int lengths[n];
	
	for(int i=0;i<n;i++)
	{
		printf("\n\n\t Enter the string %d :",i+1);
		scanf("%99s",strings[i]);
		lengths[i]=strlen(strings[i]);
	}
	
	int max_length=lengths[0];
	
	for(int i=1;i<n;i++)
	{
		if(lengths[i] > max_length)
		{
			max_length=lengths[i];
		}
	}
	
	printf("\n\n\t Maximum number of characters in the strings : %d",max_length);
	printf("\n\n\t Strings with maximum characters :");
	
	for(int i=0;i<n;i++)
	{
		if(lengths[i]==max_length)
		{
			printf(" %s",strings[i]);
		}
	}
}