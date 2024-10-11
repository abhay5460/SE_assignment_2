// 13.calculate the Factorial of a Given Number using while loop.
#include<stdio.h>
int main()
{
	int i=1 , n , fact=1;
	
	printf("Enter your number :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("Number is %d : \n",i);
		fact = fact * i;
		i++;
	}	
	printf("\nFactorial is : %d",fact);
}