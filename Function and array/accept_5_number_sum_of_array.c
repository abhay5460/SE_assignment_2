// 16.Accept 5 numbers from user and perform sum of array.

#include<stdio.h>
int main()
{
	int a[50] , i , sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter the number :");
		scanf("%d",&a[i]);
		
		sum += a[i];
	}
	printf("\n\n\tSum is : %d",sum);
}