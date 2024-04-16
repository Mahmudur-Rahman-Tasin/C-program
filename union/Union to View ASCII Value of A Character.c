
#include <stdio.h>

        /* Use of union */


union u
{
    int a;
    char ch;
} ASCII;

int main ()
{

    printf("Enter a character:  ");
    scanf("%c", &ASCII.ch);

    printf("The ASCII value of %c is %d.\n", ASCII.ch, ASCII.a);

    return 0;

}

