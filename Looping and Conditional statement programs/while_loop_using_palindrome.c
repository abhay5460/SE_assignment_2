// 22. Accept 3 numbers from user using while loop and check each numbers palindrome. 
#include <stdio.h>
int main() 
{
    int i = 1, num, reverse, temp;

    while (i <= 3) 
	{
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        temp = num;
        reverse = 0;

        while (temp != 0) {
            int remainder = temp % 10;
            reverse = reverse * 10 + remainder;
            temp /= 10;
        }

        if (num == reverse) {
            printf("%d is a palindrome\n", num);
        } else {
            printf("%d is not a palindrome\n", num);
        }

        i++;
    }
}