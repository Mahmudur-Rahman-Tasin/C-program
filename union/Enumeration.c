
#include <stdio.h>

int main()
{
    enum coin {penny = 1, nickel = 5, dime = 10, quarter = 25, half = 50, dollar = 100} bill;

    bill = 5*dollar + 2*penny;

    printf("%d tk", bill);

    return 0;
}
