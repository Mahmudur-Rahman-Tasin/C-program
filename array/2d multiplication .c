#include<stdio.h>

int main()
{
    int first[10][10];
    int second[10][10];
    int result[10][10];
    int i,j,k,r1,c1,r2,c2,sum=0;

    printf("For first matrix :\n");

    printf("\nEnter the number of rows : ");
    scanf("%d",&r1);


    printf("\nEnter the number of columns : ");
    scanf("%d",&c1);

    printf("\nFor second matrix :\n");

    printf("\nEnter the number of rows : ");
    scanf("%d",&r2);


    printf("\nEnter the number of columns : ");
    scanf("%d",&c2);

    while (c1!=r2)
    {
        printf("\nError!\n");

        printf("For first matrix :\n");

        printf("\nEnter the number of rows : ");
        scanf("%d",&r1);


        printf("\nEnter the number of columns : ");
        scanf("%d",&c1);

        printf("\n\nFor second matrix :");

        printf("\nEnter the number of rows : ");
        scanf("%d",&r2);


        printf("\nEnter the number of columns : ");
        scanf("%d",&c2);
    }

    printf("\n\nEnter the elements of first matrix : \n");
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");

    }

    printf("\n\nEnter the elements of second matrix : \n");
    for (i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");

    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum = sum + first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }


      printf("\n Matrix 1 = ");
    for (i=0;i<r1;i++)
    {
    printf ("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",first[i][j]);
        }
     printf ("\n");
     printf("\t");
    }

    printf("\n Matrix 2 = ");
    for (i=0;i<r2;i++)
    {
    printf ("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",second[i][j]);
        }
     printf ("\n");
     printf ("\t");
    }


      printf("\nResult Matrix = ");
    for (i=0;i<r1;i++)
    {

        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
     printf ("\n");
     printf("\t \t");
    }



}
