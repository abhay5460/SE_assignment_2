/* Pattern	        A B C D E 
			A B C D
			A B C
			A B 
			A  */
			
#include<stdio.h>
int main()
{
	int i , j , n;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c",64+j);
		}
		printf("\n");
	}
}
