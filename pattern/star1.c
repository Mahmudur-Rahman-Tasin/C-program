#include<stdio.h>

int main()
{
    int n,m,j,i;
    printf("pashapashi : ");
    scanf ("%d",&n);


    printf("lombalombi : ");
    scanf ("%d",&m);

    for(j=1;j<=m;j++)
    {
        for(i=1;i<=n;i++)
        {
            printf("*");
        }
        printf("\n");

    }


    getch();
    return 0;
}
