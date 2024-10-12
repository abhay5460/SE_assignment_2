// 14.Accept 5 numbers from user and find those numbers factorials .

#include<stdio.h>
int main()
{
	int i , n , j;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter your number : ");
		scanf("%d",&n);
		
		int sum=1;
		for(j=1;j<=n;j++)
		{
			sum *= j;
		}
			
		printf("Factorial is : %d",sum);
		printf("\n");
	}
}
