// 5. WAP to print factorial of given number.

#include<stdio.h>
int main()
{
	int a=1, i , sum=1;
	i=5;
	while(i>=a)
	{
		printf("%d \n",i);
		sum = sum * i;
		i--;
	}
	printf("No. : %d\n",sum);
}