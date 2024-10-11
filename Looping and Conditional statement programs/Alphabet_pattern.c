/* Pattern	A
			B B 
			C C C
			D D D D 
			E E E E E */
			
#include<stdio.h>
int main()
{
	int i , j , n;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c",64+i);
		}
		printf("\n");
	}
}