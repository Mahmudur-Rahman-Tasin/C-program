#include <stdio.h>

int main()
{
    int o,r,c,i,j,t;
    int mat[100][100];

    while(1)
    {
        scanf("%d",&o);
        if(o==1)
        {
            scanf("%d %d",&r,&c);
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d ",&mat[i][j]);
                }
            }
        }
        if(o==2)
        {
            for(i=0;i<r/2;i++)
            {
                for(j=0;j<c;j++)
                {
                    t=mat[i][j];
                    mat[i][j]=mat[r-i-1][j];
                    mat[r-i-1][j]=t;
                }
            }
        }
        if(o==3)
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c/2;j++)
                {
                    t=mat[i][j];
                    mat[i][j]=mat[i][c-j-1];
                    mat[i][c-j-1]=t;
                }
            }
        }
        if(o==4)
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    printf("%d ",mat[i][j]);
                }
                printf("\n");
            }
        }
        if(o==5) return 0;
    }
}
