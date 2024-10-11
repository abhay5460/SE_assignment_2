// 14.Accept 5 numbers from user and find those numbers factorials .

#include<stdio.h>
int main()
{
	int i , n , sum=1;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter your number : ");
		scanf("%d",&n);
		
		sum = sum * n;
	}
	printf("Factorial is : %d",sum);
}