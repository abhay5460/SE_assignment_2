// 7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746.
#include<stdio.h>
int main() 
{
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    printf("The reverse of the number is: %d\n", reverse);

    return 0;
}
