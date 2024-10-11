// 12. Write a program in C to find the number of times a given word 'is' appears in the given string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40] , word[3]="is";
	int count=0,i,j,len;
	
	printf("\n\n\t Enter the string :");
	fgets(str,sizeof str,stdin);
	
	len=strlen(word);
	
	for(i=0;str[i];i++)
	{
		if(str[i]==word[0])
		{
			int match=1;
			for(j=1;j<len;j++)
			{
				if(str[i+j]!=word[j])
				{
					match=0;
					break;
				}
			}
			if(match)
			{
				count++;
			}
		}
	}
	printf("\n\n\t The word 'is' appears %d times in the string. ",count);
}