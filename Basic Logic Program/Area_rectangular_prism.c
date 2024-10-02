/* 10.find the area of a rectangular prism formula : A=2(wl+hl+hw) */

#include<stdio.h>
int main()
{
	int W , L , H , Rectangular , wl , hl , hw;
	
	printf("Enter Value of Width :");
	scanf("%d",&W);
	
	printf("Enter Value of Length :");
	scanf("%d",&L);
	
	printf("Enter Value of Height :");
	scanf("%d",&H);
	
	wl=W*L;
	hl=H*L;
	hw=H*W;
	Rectangular=(wl+hl+hw)/2;
	
	printf("area of rectangular : %d", Rectangular);
}