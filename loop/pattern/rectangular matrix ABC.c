#include<stdio.h>

int main()
{
    int i,j,r,c;
    scanf("%d %d",&c,&r);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}
