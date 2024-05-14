// Write a program that calculates the Body Mass Index (BMI) based on the user's weight and height and categorizes the result into underweight, normal weight, overweight, or obesity.
#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Normal weight\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("Overweight\n");
    } else {
        printf("Obesity\n");
    }

    return 0;
}

