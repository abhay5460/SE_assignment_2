/*       
  * * * * * 
    * * * *
	  * * *
	    * *
		  *   */
  

#include <stdio.h>
int main()
{
    int i, j, k , n;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
    for (i = n; i > 0; i--) 
	{
		printf("\t");
        for (k = n; k > i; k--) 
		{
            printf("  ");
        }
        for (j = 0; j < i; j++)
		{
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}