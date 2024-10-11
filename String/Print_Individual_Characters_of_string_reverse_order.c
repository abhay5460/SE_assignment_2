// 3. Write a program in C to print individual characters of a string in reverse order.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[40] , l , i;
	
	printf("\n\n\t Enter a string :");
	gets(str);
	
	l = strlen(str);
	printf("\n\n\t The characters of the string in reverse order :");
	
	for(i=l-1;i>=0;i--)
	{
		printf("%c ",str[i]);
	}
	printf("\n");
	
}