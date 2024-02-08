#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int mat[n][n], t_mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
            t_mat[j][i]=mat[i][j];
        }
    }

    printf("########Output################\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",t_mat[i][j]);
        }
        printf("\n");
    }


}
