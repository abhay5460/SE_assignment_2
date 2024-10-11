// Multiplication in two_dimensional array
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],r,c,k,mul[3][3];
	
	printf("\n\n ----Matirx 1 -----");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter the array element :");
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("\n\n ----Matirx 2 -----");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter the array element :");
			scanf("%d",&b[r][c]);
		}
	}
	
	
	printf("\n\n ----Matirx 1 and Matrix 2 Multiplication -----");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			mul[r][c]=0;
			for(k=0;k<3;k++)
			{
				mul[r][c]=mul[r][c]+(a[r][k]*b[k][c]);
			}
		}
		printf("\n");
	}
	
	printf("\n\n ---- Multiplication ----- \n\n ");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",mul[r][c]);
		}
		printf("\n");
	}
}
