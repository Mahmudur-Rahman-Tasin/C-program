#include<stdio.h>
//odd number with for loop
int main()

{
    int start ,end;

    printf ("ENTER START AND END VALUE :\n");
    scanf ( "%d %d",&start ,&end);

    for ( ;start<=end;start++)
    {
        if (start%2!=0)
        printf("%d  ",start);

    }
    getch();
    return 0;
}
