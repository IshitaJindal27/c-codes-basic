// Write a program that takes three numbers as input and prints the maximum of the three.
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("Maximum: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Maximum: %d\n", num2);
    } else {
        printf("Maximum: %d\n", num3);
    }

    return 0;
}
