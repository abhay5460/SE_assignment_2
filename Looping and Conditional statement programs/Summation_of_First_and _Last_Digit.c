// 10.Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5).
#include<stdio.h>
int main() 
{
    int num, first_digit, last_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    first_digit = num;
    
    while (first_digit >= 10) 
    {
        first_digit /= 10;
    }
    
    last_digit = num % 10;
    
    sum = first_digit + last_digit;

    printf("The summation of the first and last digit is: %d\n", sum);
}
