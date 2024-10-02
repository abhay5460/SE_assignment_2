// 28.Convert years into days and months.

#include<stdio.h>
int main()
{
	int total_days , total_months , years;
	
	printf("Enter years :");
	scanf("%d",&years);
	
	total_months = years * 12;
	total_days = years  * 365;
	
	printf("YEARS into days : %d and months : %d", total_days, total_months);
	
	
}