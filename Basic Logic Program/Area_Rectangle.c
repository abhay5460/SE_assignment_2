/* 7. Find area of Rectangle Formula : A=wl . */

#include<stdio.h>
int main()
{
	int Width , Length , Area;
	
	printf("Enter Value Width :");
	scanf("%d",&Width);
	
	printf("Enter Value Length :");
	scanf("%d",&Length);
	
	Area = Width * Length;
	
	printf("Area of Rectangle : %d", Area);
	
}