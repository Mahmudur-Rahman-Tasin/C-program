/*Implement the function with the prototype void binary(short int a) that will print the
binary representation of a in 16 bits.*/
#include <stdio.h>

void binary(short int a) {

    for (int i = 15; i >= 0; i--) {

        printf("%d", (a >> i) & 1);


    }
    printf("\n");
}

int main() {
    short int num;
    printf("Enter an integer: ");
    scanf("%hd", &num);

    printf("Binary representation: ");
    binary(num);

    return 0;
}
