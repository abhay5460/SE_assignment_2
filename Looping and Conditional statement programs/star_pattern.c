/*              *
	      * *
	    * * *
	  * * * *
  	* * * * *  */
  
#include<stdio.h>
int main()
{
	int i , j , n;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i+j)<=n)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
