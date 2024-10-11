// 23. C Program to Reverse a Number Using FOR Loop.
#include <stdio.h>
int main() 
{
    int i , num, reverse, temp , n;

	printf("\n\n\t Enter the number :");
	scanf("%d",&n);
	
    for(i=1;i<=n;i++)
	{
        printf("\n\n\tEnter number %d: ", i);
        scanf("%d", &num);

        temp = num;
        reverse = 0;

        while (temp != 0)
		{
            int remainder = temp % 10;
            reverse = reverse * 10 + remainder;
            temp /= 10;
        }
        
        printf("\n\n\t Reverse number : %d",reverse);
    }
}