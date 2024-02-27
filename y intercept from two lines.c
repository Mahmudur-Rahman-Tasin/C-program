//Here's a C program that calculates the y-axis intercept of a line given two points on it:
#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    float slope, intercept;

    // Input the coordinates of two points
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    // Check if the line is vertical (x1 == x2)
    if (x1 == x2) {
        printf("The line is vertical. It doesn't intercept the y-axis.\n");
        return 0;
    }

    // Calculate the slope of the line
    slope = (float)(y2 - y1) / (x2 - x1);

    // Calculate the y-axis intercept using the formula: y = mx + c
    // Since c = y - mx
    intercept = y1 - slope * x1;

    printf("The y-axis intercept of the line is: %.2f\n", intercept);

    return 0;
}