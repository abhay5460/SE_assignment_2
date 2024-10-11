/* 1
   2 3 
   3 4 5 
   6 7 8 9 
   10 11 12 13 14 */
   
#include<stdio.h>
int main()
{
	int i , j , n , ne=1;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",ne);
			ne++;
		}
		printf("\n");
	}
}