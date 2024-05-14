// Create a program that takes a character as input and determines whether it's a vowel or a consonant.
#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
            character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
