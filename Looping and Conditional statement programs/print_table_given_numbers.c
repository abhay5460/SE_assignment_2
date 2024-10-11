// 4. WAP to print table up to given numbers.

#include<stdio.h>
int main()
{
	int a , i=1;
	
	printf("Enter Your Number :");
	scanf("%d",&a);
	
	while(i<=a)
	{
		printf("%d * %d : %d\n",a , i , i*a);
		i++;
	}
}