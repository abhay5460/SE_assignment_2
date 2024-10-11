// 8.Wap to find out the minimum array elements.
#include<stdio.h>
int main()
{
	int a[50],n,i;
	int min;
	
	printf("\n\n\t Enter the size of array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Enter the array elements a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Print the array elements : %d",a[i]);
	}
	
	min=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
			
		}
	}
	printf("\n\n\t Minimum number : %d",min);
}