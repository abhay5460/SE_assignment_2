// Addition using two_dimensional array
#include<stdio.h>
int main()
{
	int a[3][3] , b[3][3], r , c ,n ;
	
	printf("\n\n\t ----Matrix 1 ----");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter the array element :");
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("\n\n\t ------Matrix 2 ----- ");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter the array element :");
			scanf("%d",&b[r][c]);
		}
	}
	
	printf("\n\n\t ----Matrix 1 ----");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Matrix 1 : %d",a[r][c]);
		}
	}
	
	printf("\n\n\t ------Matrix 2 ----- ");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Matrix 2 : %d",b[r][c]);
		}
	}
	
	printf("\n\n\t Addition --------\n\n ");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",a[r][c]+b[r][c]);
			
		}
		printf("\n");
	}
}