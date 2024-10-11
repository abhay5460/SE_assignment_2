// 4. WAP to find factorial using recursion.
#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
	int c = factorial(n);
	
	printf("\n\n\t %d",c);
}

int factorial(int x)
{	
	if(x==0)
	{
		return 1;
	}
	else
	{
		return x*factorial(x-1);
	}
}