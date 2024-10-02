#include<stdio.h>
int main()
{
	char value;
	
	printf("Enter the Upper character :");
	scanf("%c",&value);
	
	char ch = value + 32;
	
	printf("Upper to lower  is : %c\n\n",ch);
		
}