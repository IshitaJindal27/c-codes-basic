// Write a program to generate the series: 1, -2, 3, -4, ..., up to n terms using a for loop.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d, ", -i);
        } else {
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}
