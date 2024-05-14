/*Write a program that calculates the income tax based on the given income using the following rules:
Income less than 10,000: No tax
Income between 10,000 and 50,000: 10% tax
Income above 50,000: 20% tax*/
#include <stdio.h>

int main() {
    float income, tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income < 10000) {
        tax = 0;
    } else if (income >= 10000 && income <= 50000) {
        tax = 0.1 * income;
    } else {
        tax = 0.2 * income;
    }

    printf("Income tax: %.2f\n", tax);

    return 0;
}
