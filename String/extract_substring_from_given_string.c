// 10. Write a program in C to extract a substring from a given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],substr[40];
	int start,end,i,j;
	
	printf("\n\n\t Enter the string :");
	fgets(str,100,stdin);
	str[strlen(str) - 1] = '\0';
	
	printf("\n\n\t Enter the Starting index of substring :");
	scanf("%d",&start);
	
	printf("\n\n\t Enter the ending index of substring :");
	scanf("%d",&end);
	
	j=0;
	for(i=start;i<=end;i++)
	{
		substr[j]=str[i];
		j++;
	}
	substr[j]='\0';
	
	printf("\n\n\t The Extracting substring is : %s",substr);
}