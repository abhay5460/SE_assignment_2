// 11. WAP to accept 5 numbers from user and display in reverse order using for loop and array.

#include<stdio.h>
int main()
{
	int a[50], i , j ,temp;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter the number :");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5+1;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Print the number : %d",a[i]);
	}
}