// 12. WAP to accept 5 students name and store it in array.
#include<stdio.h>
int main()
{
	char a[5][100];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter the name a[%d] : ",i);
		scanf("%s",&a[i]);
	}
		
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Print the name : %s",a[i]);
	}
	printf("\n");
}
