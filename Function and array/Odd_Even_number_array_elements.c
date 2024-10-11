// 5) Wap to print the odd & even numbers from the array elements.

#include<stdio.h>
int main()
{
	int a[50],n,i,odd=0,even=0;
	
	printf("\n\n\t Enter the array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Enter the array elements a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Arrat elements : %d",a[i]);
		
	}
	
	printf("\n\n\t Even number elements : ");
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n\n\t even number : %d",a[i]);
		}
	}
	
	printf("\n\n\t Odd number elements : ");
	
	for(i=0;i<n;i++)
	{	
		if(a[i]%2!=0)
		{
			printf("\n\n\t odd number : %d",a[i]);
		}
	}	
}