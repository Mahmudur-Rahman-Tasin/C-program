/*Write a C Program that takes the number of month and the year as two integer inputs
and outputs the number of days in that month in that year*/

#include <stdio.h>

int main()
{
    int month,year;

    scanf("%d %d", &month,&year);


    switch(month)
    {
        case 1:
            printf("31 days");
            break;
        case 2:
            {
                if((year%400==0) || ((year%100!=0)&&(year%4==0)))
                    printf("29 days");
                else
                    printf("28 days");
            break;
            }
        case 3:
            printf("31 days");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days");
            break;
        case 6:
            printf("30 days");
            break;
        case 7:
            printf("31 days");
            break;
        case 8:
            printf("31 days");
            break;
        case 9:
            printf("30 days");
            break;
        case 10:
            printf("31 days");
            break;
        case 11:
            printf("30 days");
            break;
        case 12:
            printf("31 days");
            break;
        default:
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}
