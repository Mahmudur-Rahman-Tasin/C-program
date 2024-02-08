#include<stdio.h>

int main()
{
    int A[10][10],Transpose[10][10],row,col,i,j;

    printf("Number of rows : ");
    scanf("%d",&row);


    printf("Number of columns : ");
    scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A [%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEntered Matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t ",A[i][j]);

        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            Transpose[j][i]=A[i][j];
        }
    }

    printf("\nTranspose Matrix : \n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",Transpose[i][j]);

        }
        printf("\n");
    }

    getch();
    return 0;
}
