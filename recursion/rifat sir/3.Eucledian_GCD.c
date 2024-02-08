#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    // Base case: GCD(a, 0) = a
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the gcd function and display the result
    int result = gcd(num1, num2);
    printf("GCD of %d and %d: %d\n", num1, num2, result);

    return 0;
}

