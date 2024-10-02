#include<stdio.h>
int main()
{
	char hc;
	
	printf("Enter lower character :\n");
	scanf("%c",&hc);
	
	char c = hc - 32;
	
	printf("lower to upper is : %c",c);
}