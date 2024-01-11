#include <stdio.h>

int main() {
    int number, originalNumber, digit, numDigits = 0, firstDigit, lastDigit, multiplier = 1;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    while (number != 0) {
        number /= 10;
        numDigits++;
    }

    // Reset number to the original value
    number = originalNumber;

    // Extract the first and last digits
    lastDigit = number % 10;

    while (numDigits > 1) {
        multiplier *= 10;
        numDigits--;
    }

    firstDigit = number / multiplier;

    // Swap the first and last digits
    number = lastDigit * multiplier + originalNumber % multiplier / 10 + firstDigit;

    // Output the result
    printf("Number after swapping first and last digits: %d\n", number);

    return 0;
}
