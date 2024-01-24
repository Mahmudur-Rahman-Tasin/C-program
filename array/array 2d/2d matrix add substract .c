#include<stdio.h>

int main()
{
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int d[10][10];
    int i,j,a_num_rows,a_num_cols,b_num_rows,b_num_cols,num_rows,num_cols;

    printf("For A matrix :\n");

    printf("\nEnter the number of rows : ");
    scanf("%d",&a_num_rows);


    printf("\nEnter the number of columns : ");
    scanf("%d",&a_num_cols);



    printf("\nEnter the elements of A matrix : \n");
    for (i=0;i<a_num_rows;i++)
    {
        for(j=0;j<a_num_cols;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");

    }



        printf("\n\n\nFor B matrix :\n");

        printf("\nEnter the number of rows : ");
    scanf("%d",&b_num_rows);


    printf("\nEnter the number of columns : ");
    scanf("%d",&b_num_cols);




     printf("\nEnter the elements of B matrix : \n");
    for (i=0;i<b_num_rows;i++)
    {
        for(j=0;j<b_num_cols;j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");

    }

     printf(" A = ");
    for (i=0;i<a_num_rows;i++)
    {
        printf("\t");
        for(j=0;j<a_num_cols;j++)
        {
            printf("%d  ",a[i][j]);
        }
     printf ("\n");
    }



    printf("\n B = ");
    for (i=0;i<b_num_rows;i++)
    {
        printf("\t");
        for(j=0;j<b_num_cols;j++)
        {
            printf("%d  ",b[i][j]);
        }
     printf ("\n");
    }

    if(a_num_cols==b_num_cols && a_num_rows==b_num_rows)
    {
     num_rows=a_num_rows;
     num_cols=a_num_cols;


    for (i=0;i<num_rows;i++)
    {

        for(j=0;j<num_cols;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }

    }


    printf("\nA + B =");
     for (i=0;i<num_rows;i++)
    {
        printf("\t");
        for(j=0;j<num_cols;j++)
        {
            printf("%d  ",c[i][j]);
        }
     printf ("\n");
    }



    for (i=0;i<num_rows;i++)
    {

        for(j=0;j<num_cols;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }

    }


    printf("\nA - B =");
     for (i=0;i<num_rows;i++)
    {
        printf("\t");
        for(j=0;j<num_cols;j++)
        {
            printf("%d  ",d[i][j]);
        }
     printf ("\n");
    }
    }

    else
    {
        printf ("\nThe order of these matrices are not same.Hence,calculation cannot be done");
    }
}
