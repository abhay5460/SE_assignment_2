// 10. Two dynamic array from the user.

#include<stdio.h>
int main()
{
	int a[20][20] , rs , cs ,r ,c;
	
	printf("\n\n\t Enter the value rows :");
	scanf("%d",&rs);
	
	printf("\n\n\t Enter the value columns :");
	scanf("%d",&cs);
	
	for(r=0;r<rs;r++)
	{
		for(c=0;c<cs;c++)
		{
			printf("\n\n\tEnter the number a[%d] [%d] :",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	
	for(r=0;r<rs;r++)
	{
		for(c=0;c<cs;c++)
		{
			printf(" %d",a[r][c]);
		}
		printf("\n");
	}
}