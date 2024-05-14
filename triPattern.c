// Write a program to print a right-angled triangle pattern of asterisks (*) of a given size using a for loop.

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the triangle: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
