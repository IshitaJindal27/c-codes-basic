// Write a program to print all prime numbers in a given range [start, end] using a for loop.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int start, end;

    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers in the range [%d, %d]: ", start, end);

    for (int i = start; i <= end; i++) {
        bool isPrime = true;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime && i > 1) {
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}
