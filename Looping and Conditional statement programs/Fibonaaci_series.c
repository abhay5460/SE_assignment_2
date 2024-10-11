// 6. WAP to print Fibonacci series up to given numbers.
#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    printf("%d %d ", a, b);

    for (i = 3; i <= n; i++) {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    return 0;
}
