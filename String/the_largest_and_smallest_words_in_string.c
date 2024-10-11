// 15. Write a program in C to find the largest and smallest words in a string.
#include<stdio.h>
#include<string.h>
#define INT_MAX 100
int main()
{
	char str[50] , largest[50]=" ", smallest[50]=" ",temp[40];
	int largest_len=0 , smallest_len =INT_MAX;
	
	printf("\n\n\t Enter the string :");
	fgets(str,sizeof str,stdin);
	
	printf("\n\n\t The string is : %s",str);
	
	char *token = strtok(str," ");
	while(token!=NULL)
	{
		strcpy(temp,token);
		int len=strlen(temp);
		
		if(len > largest_len)
		{
			largest_len=len;
			strcpy(largest,temp);
		}
		
		if(len < smallest_len)
		{
			smallest_len=len;
			strcpy(smallest,temp);
		}
		token=strtok(NULL," ");
	}
	printf("\n\n\t The largest word is : %s",largest);
	printf("\n\n\t The smallest word is : %s",smallest);
}