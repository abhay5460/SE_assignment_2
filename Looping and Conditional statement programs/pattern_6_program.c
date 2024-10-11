/* 
 	* 
 	* *
 	* * *
 	* * * *
 	* * *
 	* *
 	*
*/

#include<stdio.h>
int main()
{
	int i , j , n;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}