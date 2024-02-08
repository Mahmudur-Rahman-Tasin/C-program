#include <stdio.h>
int main() {

    int Seconds;


    printf("Enter the time interval in seconds: ");
    scanf("%d", &Seconds);

    int hours = Seconds / 3600;
    int minutes = (Seconds % 3600) / 60;
    int seconds = Seconds % 60;

    printf("The time is: %d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);

    return 0;
}
