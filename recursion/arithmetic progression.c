#include <stdio.h>

void printSeries(int start, int increment, int end)
{
    if (start > end)  // Base case
    {
        return;
    }
    printf("%d ", start);  // Print the current number

    printSeries(start+increment, increment, end); // Recursion
}


int main()
{
    int start, increment, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter increment: ");
    scanf("%d", &increment);

    printf("Enter ending number: ");
    scanf("%d", &end);

    if (end < start)
    {
        printf("Error: End number cannot be less than starting number.\n");
    }
    else
    {
        printf("Series:\n");
        printSeries(start, increment, end);
    }
    return 0;
}
