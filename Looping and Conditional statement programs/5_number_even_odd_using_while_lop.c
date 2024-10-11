// 17. Calculate 5 numbers from user and calculate number of even and odd using of while loop.

#include<stdio.h>
int main()
{
	int i , n , b=0 , c=0 , e;
	
	printf("Enter your Number :");
	scanf("%d",&n);
	
	i=1;
	
	
	while(i<=n)
	{	
		if(i%2==0)
		{
			printf("Even number : %d\n",i);
			b += i;
		}
		i++;
	}
	
	e=1;
	
	while(e<=n)
	{
		if(e%2!=0)
		{
			printf("Odd number : %d\n",e);
			c += e;
		}
		e++;
	}
	printf("Even number : %d\n",b);
	printf("Odd number : %d\n",c);
}