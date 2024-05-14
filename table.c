// Write a program to print the multiplication table of a given positive integer.

#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
