// 1. Write a program to find out the max number from given array using function.
#include<stdio.h>
void max();
int main()
{
	max();
}

void max()
{
	int a[5]={4,2213,23,233,44}, sum=0,i;
	
	for(i=0;i<5;i++)
	{
		if(a[i]>sum)
		{
			sum=a[i];
		}	
	}
	printf("max number : %d",sum);
}