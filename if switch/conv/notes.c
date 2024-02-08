#include <stdio.h>

int main() {

    int amount, remainingAmount;

    int notes500, notes100, notes50, notes10, notes5, notes1;

    printf("Enter the amount of money: ");
    scanf("%d", &amount);


    remainingAmount = amount;

    notes500 = remainingAmount / 500;
    remainingAmount %= 500;

    notes100 = remainingAmount / 100;
    remainingAmount %= 100;

    notes50 = remainingAmount / 50;
    remainingAmount %= 50;

    notes10 = remainingAmount / 10;
    remainingAmount %= 10;

    notes5 = remainingAmount / 5;
    remainingAmount %= 5;

    notes1 = remainingAmount;

    printf("Notes needed:\n");
    printf("500: %d\n", notes500);
    printf("100: %d\n", notes100);
    printf("50: %d\n", notes50);
    printf("10: %d\n", notes10);
    printf("5: %d\n", notes5);
    printf("1: %d\n", notes1);

    return 0;
}
