// 6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array.

#include<stdio.h>
int main()
{
	int i , j , k , a[3][3] , b[3][3] , sub[i][j] , mul[i][j];
	
	printf("\n\n\t --- Matrix 1  ---- ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n\t Enter the First number : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n\t ---- Matrix 2 ----- ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n\t Enter the Second number : ");
			scanf("%d",&b[i][j]);
		}
	}
	
	printf(" \n\n\t---- Addition -----\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
	printf(" \n\n\t------ Substraction  -----\n\n");
	for(i=0;i<3;i++)
	{
		sub[i][j]=0;
		for(j=0;j<3;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
			printf("%d ",sub[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=0;k<3;k++)
			{
				mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
			}			
			printf("\n");
		}
	} 
	printf("\n\n\t ----- Multiplication ------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
}
