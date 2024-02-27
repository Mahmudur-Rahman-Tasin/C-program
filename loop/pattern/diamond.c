#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, space, num;

    printf("Enter a number (1 <= n <= 9): ");
    scanf("%d", &n);

    // Upper half of the pattern
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = i; space < n; space++) {
            printf("  ");
        }
        // Print increasing numbers
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (j = 2; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = n; space > i; space--) {
            printf("  ");
        }
        // Print increasing numbers
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        // Print decreasing numbers
        for (j = 2; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}