// 2) Wap to declare the size of array & read the elements from the user.

#include<stdio.h>
int main()
{
	int a[50],i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Read the elements from the user a[%d] : ",i);
		scanf("%d",&a[i]);
	}
}