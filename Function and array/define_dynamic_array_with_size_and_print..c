// 3) Wap to define the array from the user (with size).
#include<stdio.h>
int main()
{
	int a[50],size,i;
	
	printf("\n\n\t Enter size of the array :");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Array from user a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Print the array : %d",a[i]);
	}
}