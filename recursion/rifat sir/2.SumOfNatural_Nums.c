#include <stdio.h>

// Recursive function to calculate the sum of first N natural numbers
int sumOfNaturals(int n) {
    // Base case: sum of first 0 natural numbers is 0
    if (n == 0) {
        return 0;
    }
    else {
        return n + sumOfNaturals(n - 1);
    }
}

int main() {
    int N;

    // Input N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Call the sumOfNaturals function and display the result
    int result = sumOfNaturals(N);
    printf("Sum of first %d natural numbers: %d\n", N, result);

    return 0;
}

