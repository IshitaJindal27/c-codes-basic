// Write a program to calculate the sum of the squares of the first n natural numbers using a for loop.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum of squares: %d\n", sum);

    return 0;
}
