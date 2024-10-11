// 13. WAP to accept 5 numbers from user and check entered number is even or odd using of array.
#include<stdio.h>
int main()
{
	int a[50] , i;
	
	printf("\n\n\t Accept 5 number from user .");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter %d Value :",i);
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		{
			printf("\n\n\t Even number : %d",a[i]);
		}
		else
		{
			printf("\n\n\t Odd number : %d",a[i]);
		}
	}	
}