// 15. Store 5 numbers in array and sort it in ascending order.

#include<stdio.h>
int main()
{
	int a[5], i , j ,temp=0;
	
	printf("\n\n\t Before swapping :");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter the number :");
		scanf("%d",&a[i]);	
	}
	
	for(i=0;i<5+1;i++)
	{
		for(j=i;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("\n\n\t After swapping :\n\n");
	for(i=0;i<5;i++)
	{
		printf("\t");
		printf("Print number : %d\n",a[i]);
	}
}