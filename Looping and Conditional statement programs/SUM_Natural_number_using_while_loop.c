// 16. Calculate the Sum of Natural Numbers Using the While Loop.
#include<stdio.h>
int main()
{
	int i=1 , a=0 , n;
	
	printf("Enter your number :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",i);
		
		a += i;
		
		i++;
	}
	printf("Sum is : %d",a);
}