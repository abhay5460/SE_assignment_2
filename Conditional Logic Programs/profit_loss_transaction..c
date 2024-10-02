// 18. Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
int main()
{
	float selling_price , cost_price ;
	
	printf("Enter Value of Selling Price :");
	scanf("%f",&selling_price);
	
	printf("Enter Value of Cost Price :");
	scanf("%f",&cost_price);
	
	if(selling_price > cost_price)
	{
		float profit = selling_price - cost_price;
		printf("The Profit is : %.2f",profit);
	}
	else
	{
		float loss = cost_price - selling_price;
		printf("The Loss is : %.2f",loss);
	}
}