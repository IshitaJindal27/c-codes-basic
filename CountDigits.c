// Write a program to count the number of digits in a given positive integer.

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
