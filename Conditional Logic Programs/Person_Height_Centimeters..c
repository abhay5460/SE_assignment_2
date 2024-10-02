// 8. WAP to accept the height of a person in centimeters and categorize the person according to their height.

#include<stdio.h>
int main()
{
	int height ;
	
	printf("\n\nEnter the Value of Centimeters :");
	scanf("%d",&height);
	
	if(height<150)
		printf("The person is short .\n\n");
	else if(height > 150 && height < 165)
		printf("The person is average tall.\n\n");
	else if(height > 165 && height < 180)
		printf("The person is tall.");
	else 
		printf("The person is very tall.");
}