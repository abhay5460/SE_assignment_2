// 25.Accept 5 expense from user and find average of expense .
#include<stdio.h>
int main()
{
	int expense1 ,expense2, expense3, expense4, expense5;
	
	printf("Enter the expense 1:");
	scanf("%d",&expense1);
	
	printf("Enter the expense 2:");
	scanf("%d",&expense2);	
	
	printf("Enter the expense 3:");
	scanf("%d",&expense3);
	
	printf("Enter the expense 4:");
	scanf("%d",&expense4);
	
	printf("Enter the expense 5:");
	scanf("%d",&expense5);
	
	int average = expense1 + expense2 + expense3 + expense4 + expense5 ;
	
	float final_average = average / 5;
	
	printf("Average of expense : %.2f",final_average);
	
	
	
}