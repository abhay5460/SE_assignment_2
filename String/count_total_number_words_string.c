// 4. Write a program in C to count the total number of words in a string.
#include<stdio.h>
int main()
{
	char str[150];
	int i=0 , words=0;
	
	printf("\n\n\t Enter the string :");
	fgets(str,200,stdin);
	
	while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			if(i>0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t')
			{
				words++;
			}
		}
		i++;
	}
	
	printf("\n\n\t Total number of words : %d",words);
}

	/*while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			if(i>0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t')
			{
				words++;
			}
		}
		i++;
	}
	
	if(i>0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t')
	{
		words++;
	}*/