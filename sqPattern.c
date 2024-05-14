// Write a program to print a square pattern of asterisks (*) of a given size using a for loop.

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the pattern: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
