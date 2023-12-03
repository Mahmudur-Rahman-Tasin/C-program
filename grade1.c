#include<stdio.h>
//takes the percentage of marks achieved in an examination by a student as an integer input and outputs the letter grade achieved by that student in a university
int main()
{
    int m;
    scanf("%d",&m);
    if(m>=80) printf("A+");
    else if(m>=75 || m<=79) printf("A");
    else if(m>=70 || m<=74) printf("A-");
    else if(m>=65 || m<=69) printf("B+");
    else if(m>=60 || m<=64) printf("B");
    else if(m>=55 || m<=59) printf("C");
    else if(m>=40 || m<=54) printf("D");
    else if(m>=0 || m<=39) printf("F (Fail)");

    return 0;
}
