// 7. Accept marks from user and check pass or fail.

#include<stdio.h>
int main()
{
	int  marks1 , marks2 , marks3 , marks4 , marks5;
	char str[30];
	
	printf("\n\nEnter Name :");
	scanf("%s",&str);
	
	printf("Enter Value of a :");
	scanf("%d",&marks1);
	
	printf("Enter Value of a :");
	scanf("%d",&marks2);
	
	printf("Enter Value of a :");
	scanf("%d",&marks3);
	
	printf("Enter Value of a :");
	scanf("%d",&marks4);
	
	printf("Enter Value of a :");
	scanf("%d",&marks5);	
	
	float percentage = (marks1 + marks2 + marks3 + marks4 + marks5) / 5;
	
	printf("\n\nThis is most Famous Name : %s",&str);
	
	printf("\n\nStudent Result : %.2f",percentage);
	
	if(percentage>=33)
		printf("\n\nStudent Pass.");
	else
		printf("\n\nStudent Fail.");
}