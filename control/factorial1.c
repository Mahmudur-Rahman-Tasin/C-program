#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; //to handle larger factorials

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        factorial=i*factorial;
    }
    printf("The factorial of %d is %llu.\n", number, factorial);

    return 0;
}
