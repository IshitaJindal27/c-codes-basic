// Write a program to calculate the average of n numbers entered by the user using a for loop.

#include <stdio.h>

int main() {
    int n, num, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("Average: %.2f\n", (float)sum / n);

    return 0;
}
