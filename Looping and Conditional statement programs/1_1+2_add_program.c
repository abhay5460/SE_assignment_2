#include <stdio.h>
int main() 
{
    int n, sum = 0, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	{
        int inner_sum = 0;
        for (j = 1; j <= i; j++) 
		{
            inner_sum += j;
        }
        sum += inner_sum;
    }

    printf("The sum of the series is: %d\n", sum);_
}