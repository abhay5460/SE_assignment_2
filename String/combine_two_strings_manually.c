// 14.Write a program in C to combine two strings manually.
#include<stdio.h>
int main()
{
	char str1[25] , str2[30] , result[65];
	int i , j;
	
	printf("\n\n\t Enter the First string :");
	scanf("%s",&str1);

    printf("\n\n\t Enter the Second string :");
    scanf("%s",&str2);

    for(i=0;str1[i]!='\0';i++)
    {
    	result[i]=str1[i];
	}
    
    for(j=0;str2[j]!='\0';j++)
    {
    	result[i+j]=str2[j];
	}

    // Add the null character at the end of the result
   	result[i + j] = '\0';

    printf("\n\n\t Combined string: %s", result);

    return 0;
}
