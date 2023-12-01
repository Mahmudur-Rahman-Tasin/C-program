#include<stdio.h>

int main ()
{
    int ara[6];
    int n=6,temp,i;

    for (i=0;i<n;i++)
    {

        scanf ("%d",&ara[i]);
    }



    for (i=0;i<n/2;i++)
    {
    temp=ara[i];
    ara[i]=ara[n-1-i];
    ara[n-1-i]=temp;

    }

    for(i=0;i<n;i++)
    {
        printf (" \n%d\n",ara[i]);
    }



    getch();
    return 0;
}
