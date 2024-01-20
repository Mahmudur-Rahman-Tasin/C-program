#include<stdio.h>

int main()
{
    int i,j,k,r;
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        for(k=1;k<=2*(r-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+i);
        }
        printf("\n");
    }
    return 0;
}

