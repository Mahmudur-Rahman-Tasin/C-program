#include <stdio.h>
//C program to print number of days in a month using switch case
int main()
{
    int month,year;

    // Input month number, year from user 

    scanf("%d %d", &month,&year);


    switch(month)
    {
        case 1: 
            printf("31 days");
            break;
        case 2:{ 
            if(year%4==0)printf("29 days");//leap
            else printf("28 days");
            break;}
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
