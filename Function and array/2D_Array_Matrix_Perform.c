// 14. Perform 2D matrix array.
#include<stdio.h>
int main()
{
	int a[3][3] , i , j;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n\t Enter the array a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n\t 2D MATRIX ARRAY \n\n");
	
	for(i=0;i<3;i++)
	{
		printf("\t\t");
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}