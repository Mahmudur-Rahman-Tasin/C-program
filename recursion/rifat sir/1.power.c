#include <stdio.h>


int power(int x, int y) {
    if (y == 0) {
        return 1;
    }
    else {
        return x * power(x, y - 1);
    }
}

int main() {
    int base, exponent;

    // Input base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Call the power function and display the result
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
