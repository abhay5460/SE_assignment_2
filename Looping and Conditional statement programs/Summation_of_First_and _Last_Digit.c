// 10.Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5).
#include<stdio.h>
int main() 
{
    int num, first_digit, last_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the first digit
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Calculate the last digit
    last_digit = num % 10;

    // Calculate the sum
    sum = first_digit - last_digit;

    printf("The summation of the first and last digit is: %d\n", sum);

    return 0;
}