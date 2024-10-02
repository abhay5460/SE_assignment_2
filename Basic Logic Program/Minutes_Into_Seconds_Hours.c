// 29.Convert minutes into seconds and hours .

#include<stdio.h>
int main()
{
	int minutes , seconds , hours;
	
	printf("Enter total minutes :");
	scanf("%d",&minutes);
	
	seconds = minutes * 60;
	hours = minutes / 60;
	
	printf("minutes convert into seconds : %d and hours : %d",seconds,hours);
}