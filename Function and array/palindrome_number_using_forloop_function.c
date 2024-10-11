//10. WAP to perform Palindrome number using for loop and function.

#include<stdio.h>

int is_palindrome(int num)
{
    int reversed = 0, original = num;

    for (; num != 0; num /= 10) 
	{
        int digit = num % 10;
        reversed = reversed * 10 + digit;
    }
    return original == reversed;
}

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
}
