#include <stdio.h>

int main()
{
    int r,c,i,j,sum=0,mat[100][100];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j) sum=sum+mat[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
