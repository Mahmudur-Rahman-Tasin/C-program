#include <stdio.h>
//
int EQUALCHECK(int r1[],int r2[],int c)
{
    int j;
    for(j=0;j<c;j++)
    {
        if( r1[j] != r2[j] )
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int r,c,i,j,mat[100][100],uniq[100][100],k=0,EQUAL=0;
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++)
    {
        for(j =0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            if( EQUALCHECK( mat[i], uniq[j], c) == 1)  // mat er rows gular sathe uniq er kono row soman hole add hobena
            {
                EQUAL=1;
                break;
            }
        }
        if(EQUAL==0)
        {
            for(j=0;j<c;j++)
            {
                uniq[k][j] = mat[i][j];                 // only unique holei add hobe, k for next uniq row
            }
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",uniq[i][j]);
        }
        printf("\n");
    }

    return 0;
}
