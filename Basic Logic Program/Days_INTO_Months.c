// 27.Convert days into months .

#include<stdio.h>
int main()
{
	int days ;
	
	printf("Enter total days :");
	scanf("%d",&days);
	
	int months = days / 30;
	
	printf("Days into months : %d", months);
	
	
}