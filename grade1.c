#include <stdio.h>
//takes the percentage of marks achieved in an examination by a student as an integer input and outputs the letter grade achieved by that student in a university

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=80)
        printf("A+");
    else if(n>=75)
        printf("A");//linear so, input 81 reads first if initially, then bypasses all else 
    else if(n>=70)
        printf("A-");
    else if(n>=65)
        printf("B+");
    else if(n>=60)
        printf("B");
    else if(n>=55)
        printf("C");
    else if(n>=40)
        printf("D");
    else if(n<40 && n>=0) printf("F (Fail) ");
    else printf("Invalid input");

    return 0;
}