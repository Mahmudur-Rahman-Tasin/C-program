#include<stdio.h>

int main()
{
    int i,j;

    for (i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("c");
        }
        for(j=1;j<=10-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=10-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("c");
        }

         printf("\n");
    }
    getch();
    return 0;
}
