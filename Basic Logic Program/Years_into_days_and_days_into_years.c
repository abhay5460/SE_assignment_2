// 30. WAP to convert years into days and days into years. 
#include<stdio.h>
int main()
{
	int years , days ;
	
	printf("\nEnter years :");
	scanf("%d",&years);
	
	days = years * 365;
	
	printf("\nyears into days : %d\n",days);
	
	int days1, years1;
	
	printf("\n\nEnter days:");
	scanf("%d",&days1);
	
	years1 = days1 / 365;
	
	printf("\n\ndays into years : %d",years1);
	
}