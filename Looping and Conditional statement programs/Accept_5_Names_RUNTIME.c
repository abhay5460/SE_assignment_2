// 1. Accept 5 names from user at run time.
#include <stdio.h>
int main()
{
	char name[5][100];
	int i;
	printf("Enter the names list : \n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter your name %d :",i+1);
		scanf(" %s",&name[i]);
	}
	printf("\nThe following names :\n");
	for(i=0;i<5;i++)
	{
		printf("%s",name[i]);
		printf("\n");
	}
}