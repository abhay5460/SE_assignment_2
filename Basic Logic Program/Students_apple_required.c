/* 12. Accept number of students from user. I need to give 5 apples to each student. How many apples are required? */

#include<stdio.h>
int main()
{
	int students , apple;
	
	printf ("Enter the student :");
	scanf("%d",&students);
	
	apple = students * 5;
	
	printf("Apples are required : %d",apple);
}