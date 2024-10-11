/*  1
	1 0
	1 0 1
	1 0 1 0
	1 0 1 0 1 */
	
#include<stdio.h>
int main()
{
	int j , n , i;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				printf("1",j);
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
