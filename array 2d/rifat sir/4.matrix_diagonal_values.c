#include<stdio.h>

int main()
{
    int row,col,sum1=0,sum2=0;
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

    printf("Printing primary diagonal values: ");
    for(i=0;i<row;i++)
    {
        printf("%d ",mat[i][i]);
        sum1=sum1+mat[i][i];
    }
    printf("\nPrinting secondary diagonal values: ");
    for(i=0,j=col-1;j>=0;i++,j--)
    {
        printf("%d ",mat[i][j]);
        sum2=sum2+mat[i][j];
    }
    printf("%d,%d",sum1,sum2);
}


