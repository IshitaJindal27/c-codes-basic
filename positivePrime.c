// Write a program to check whether a given positive integer is a prime number.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;
    int i = 2;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }

    if (isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
