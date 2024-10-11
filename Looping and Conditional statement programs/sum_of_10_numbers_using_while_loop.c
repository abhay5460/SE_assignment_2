// 15.Calculate sum of 10 numbers using of while loop.

#include<stdio.h>
int main()
{
	int i , n , sum=0;
	
	printf("Enter your number :");
	scanf("%d",&n);
	
	i=1;
	
	while(i<=n)
	{
		printf("%d\n",i);
		
		sum += i;
		
		i=i+1;
	}
	
	printf("Answer is : %d",sum);
}