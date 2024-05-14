// Create a program that takes three integers as inputs and determines whether they can form a triangle. If yes, determine whether it's an equilateral, isosceles, or scalene triangle.
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        } else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("Cannot form a triangle\n");
    }

    return 0;
}

