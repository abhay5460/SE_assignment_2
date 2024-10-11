// 8) Wap to search the element is found in one dimensional array or not. (by element).

#include<stdio.h>
int main()
{
		int a[50],i,size,temp,j;
		
		printf("\n\n\t Enter the size of array :");
		scanf("%d",&size);
		
		for(i=0;i<size;i++)
		{
			printf("\n\n\t Enter the number of array elements a[%d] :",i);
			scanf("%d",&a[i]);
		}
		printf("\n\n\t Before swapping : -");
		
		for(i=0;i<size;i++)
		{
			printf("\n\n\t Print the array elements : %d",a[i]);
		}
		
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		
		printf("\n\n\t After swapping : -");
		
		for(i=0;i<size;i++)
		{
			printf("\n\n\t array element  a[%d] : %d",i,a[i]);
		}
}