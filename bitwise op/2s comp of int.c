#include <stdio.h>

int main()
{
    int n, comp;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // all bit inverse, 1 add = 2's complement 
    comp = ~n + 1;

    printf("2's complement of %d is %d.\n", n, comp);

    return 0;
}
