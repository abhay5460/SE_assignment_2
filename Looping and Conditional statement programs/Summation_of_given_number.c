// 9. Write a program make a summation of given number (E.g., 1523 Ans: -11).
#include<stdio.h>
int main()
{
	int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) 
	{
        int digit = num % 10;
        sum += digit ;
        num /= 10;
    }

    printf("The summation of digit is: %d\n", sum);

    return 0;
}