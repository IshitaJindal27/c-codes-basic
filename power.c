// Write a program to calculate the result of raising a given base to a given exponent.

#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;
    int i = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    while (i <= exponent) {
        result *= base;
        i++;
    }

    printf("%d^%d = %lld\n", base, exponent, result);

    return 0;
}
