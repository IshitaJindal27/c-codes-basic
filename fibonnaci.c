// Write a program to generate the Fibonacci series up to a given number of terms.

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while (i < n) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
        i++;
    }

    printf("\n");

    return 0;
}
