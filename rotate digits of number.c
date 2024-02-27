//Here's a C program to rotate each digit of a non-negative integer to the left by 2 positions:
#include<stdio.h>

int main() {
    int N, rotated_number, remainder, quotient;

    // Input the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &N);

    // Initialize rotated_number to 0
    rotated_number = 0;

    // Rotate each digit to the left by 2 positions
    quotient = N;
    remainder = 0;
    while (quotient != 0) {
        remainder = quotient % 10;
        quotient = quotient / 10;
        // Left rotate the digit by 2 positions
        remainder = (remainder * 10 + (remainder / 10)) % 10;
        rotated_number = (rotated_number * 10) + remainder;
    }

    // Print the rotated number
    printf("The rotated number is: %d\n", rotated_number);

    return 0;
}