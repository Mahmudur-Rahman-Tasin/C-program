//Here's a C program to input a date (day, month, year) after 01-01-2000 and convert it to the number of days since 01-01-2000, ignoring leap years:
#include <stdio.h>

// Function to check if a given year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month
int daysInMonth(int month, int year) {
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1;
    }
}

// Function to calculate the number of days since 01-01-2000
int daysSince2000(int day, int month, int year) {
    int days = 0;
    
    // Count days for each year since 2000
    for (int y = 2000; y < year; y++) {
        days += isLeapYear(y) ? 366 : 365;
    }
    
    // Count days for each month
    for (int m = 1; m < month; m++) {
        days += daysInMonth(m, year);
    }
    
    // Add days of the current month
    days += day;
    
    return days;
}

int main() {
    int day, month, year;
    
    // Input the date
    printf("Enter the date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);
    
    // Check if the date is after 01-01-2000
    if (year < 2000 || (year == 2000 && month == 1 && day < 1)) {
        printf("Invalid date. Date must be after 01-01-2000.\n");
        return 1;
    }
    
    // Calculate the number of days since 01-01-2000
    int days = daysSince2000(day, month, year);
    
    // Output the result
    printf("Number of days since 01-01-2000: %d\n", days);
    
    return 0;
}