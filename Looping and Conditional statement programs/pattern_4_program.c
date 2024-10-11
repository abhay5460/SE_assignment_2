/* A
   A B
   A B C
   A B C D
   A B C D E */
   
#include<stdio.h>
int main()
{
	int i , j ,n;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",j+64);
		}
		printf("\n");
	}
}