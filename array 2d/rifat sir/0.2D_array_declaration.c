#include<stdio.h>

int main()
{
    int ara1[10][10];

    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d ",ara1[i][j]);
        }
        printf("\n");
    }
}
