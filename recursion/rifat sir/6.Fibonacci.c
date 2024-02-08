#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Recursive function to print the Fibonacci series up to N terms
void printFibonacciSeries(int N, int current) {
    if (current > N) {
        return;
    }

    printf("%d ", fibonacci(current));

    printFibonacciSeries(N, current + 1);
}

int main() {
    int N;

    // Input the number of terms in the Fibonacci series
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &N);

    // Call the printFibonacciSeries function and display the result
    printf("Fibonacci Series up to %d terms: ", N);
    printFibonacciSeries(N, 0);

    return 0;
}

