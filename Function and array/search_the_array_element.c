// 8) Wap to search the element is found in one dimensional array or not. (by element).

#include<stdio.h>
int main()
{
		int a[50],i,size,search,temp=0;
		
		printf("\n\n\t Enter the size of array :");
		scanf("%d",&size);
		
		for(i=0;i<size;i++)
		{
			printf("\n\n\t Enter the number of array elements a[%d] :",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<size;i++)
		{
			printf("\n\n\t Print the array elements : %d",a[i]);
		}
		
		printf("\n\n\t Enter the search element :");
		scanf("%d",&search);
	
		for(i=0;i<size;i++)
		{
			if(a[i]==search)
			{
				temp=1;
			}
		}
		
		if(temp==1)
		{
			printf("\n\n\t %d : Value found.",search);
		}
		else
		{
			printf("\n\n\t %d : Value not found.",search);
		}
}