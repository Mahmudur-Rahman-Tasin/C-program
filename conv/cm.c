#include <stdio.h>

int main() {

    int Centimeters;

    printf("Enter the height in centimeters: ");
    scanf("%d", & Centimeters);

    int meters = Centimeters / 100;
    int centimeters = Centimeters % 100;

    printf(" %d meters %d centimeters\n", meters, centimeters);

    return 0;
}
