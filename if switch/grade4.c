#include <stdio.h>

int main() {
    // Declare variables
    double score;

    // Get user input
    printf("Enter the student's examination score: ");
    scanf("%lf", &score);

    // Check the grade using nested switch statements
    switch ((int)score / 10) {
        case 10:
        case 9:
        case 8:
            printf("Grade: A\n");
            break;
        case 7:
        case 6:
            printf("Grade: B\n");
            break;
        case 5:
        case 4:
            printf("Grade: C\n");
            break;
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Grade: F\n");
            break;
        default:
            printf("Invalid score\n");
    }

    return 0;
}
