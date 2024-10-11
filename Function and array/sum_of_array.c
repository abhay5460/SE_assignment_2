// 4) Wap to make sum of all the array elements.

#include<stdio.h>
int main()
{
	int a[50],n,sum=0,i;
	
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
		sum=sum+a[i];
	}
	printf("\n\n\t Sum is : %d",sum);
}