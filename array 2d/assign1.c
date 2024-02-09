#include <stdio.h>

int main()
{
    int o,r,c,i,j,t;
    int mat[100][100];

    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&o);
        if(o==1)
        {
            printf("Rows: ");
            scanf("%d",&r);
            printf("Columns: ");
            scanf("%d",&c);
            printf("Input a 2D array:\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&mat[i][j]);
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
        if(o==5)
        {
            printf("End!!!");
            return 0;
        }
    }
}
