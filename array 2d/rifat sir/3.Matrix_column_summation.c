#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);

    int mat[row+1][col+1];

    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<col;i++)
    {
        int sum=0;
        for(j=0;j<row;j++)
        {
            sum+=mat[j][i];
        }
        printf("%d ",sum);
    }
}

