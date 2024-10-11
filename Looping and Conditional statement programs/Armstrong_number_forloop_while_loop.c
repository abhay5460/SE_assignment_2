// 12. Program of Armstrong Number in C Using For Loop & While Loop.
#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count the number of digits
    for (digit = temp; digit != 0; digit /= 10) {
        count++;
    }

    temp = num;

    // Calculate the sum of each digit raised to the power of the number of digits
    for (digit = temp; digit != 0; digit /= 10) {
        int power = 1;
        int n = digit % 10;
        for (int i = 1; i <= count; i++) {
            power *= n;
        }
        sum += power;
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}