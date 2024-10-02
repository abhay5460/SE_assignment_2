// 33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3).

#include <stdio.h>
#include <math.h>
int main()
{
	int num, a, b, c;
	printf("\nEnter The Number : ");
	scanf("%d", &num);
	a = pow(num, 1);
	b = pow(num, 2);
	c = pow(num, 3);
	printf("\nOutput  is :");
	printf("%d  ,%d  ,%d \n\n", a, b, c);
	
}