// Develop a program that converts temperature from Fahrenheit to Celsius or vice versa based on user input.
#include <stdio.h>

int main() {
    char choice;
    float temperature, convertedTemperature;

    printf("Enter 'C' for Celsius to Fahrenheit or 'F' for Fahrenheit to Celsius: ");
    scanf(" %c", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    if (choice == 'C' || choice == 'c') {
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, convertedTemperature);
    } else if (choice == 'F' || choice == 'f') {
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}

