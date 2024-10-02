// 31. Convert kilometers into meters .
#include<stdio.h>
int main()
{
	int km , m;
	
	printf("Enter kilometer :");
	scanf("%d",&km);
	
	m = km * 1000;
	
	printf("Kilometers to meters : %d",m);
}