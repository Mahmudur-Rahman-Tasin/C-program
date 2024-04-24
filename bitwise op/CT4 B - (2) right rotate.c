#include<stdio.h>

int main() {
    unsigned char n, r, rotated;

    printf("Enter value of n: ");
    scanf("%hhd", &n); //The %hhd means signed char

    printf("Enter value of r: ");
    scanf("%hhd", &r);

    // Right rotation
    rotated = (n >> r) | (n << (8 - r));

    printf("After right rotation: %d\n", rotated);

    return 0;
}


/*output in codeblocks : 0
output in programiz : 174 */
