// 9) Wap to search the position is found with the one dimensional array element in array. (by position).

#include<stdio.h>
int main()
{
	int a[50],i,size,pos;
	
	printf("\n\n\t Enter the size of array :");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Enter the array elements a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Print the array elements : %d",a[i]);
	}
	
	printf("\n\n\t Enter the position :");
	scanf("%d",&pos);
	
	if(pos >= 0 && pos < size)
	{
		printf("\n\n\t This is a[%d] position to element : %d",pos,a[pos]);
	}
	else
	{
		printf("\n\n\t Not found position.");
	}
}
