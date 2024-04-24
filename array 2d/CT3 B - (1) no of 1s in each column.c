/*Take two integers m & n indicating the number of rows and columns respectively of a
binary matrix. Then take all the elements of the binary matrix as input. You have to
determine the number of 1s in each column of the matrix and print them. Now, write the
C program.*/

#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int binary_matrix[m][n];

    //input
    printf("Enter the elements of the binary matrix:\n");
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
           scanf("%d", &binary_matrix[i][j]);
       }
    }

    printf("Number of 1s in each column:\n");
    for (int j = 0; j < n; j++)
    {
        int count=0;
        for (int i = 0; i < m; i++)
        {
           if (binary_matrix[i][j] == 1)
           {
              count++;
           }
        }

        printf("Column %d: %d\n", j+1, count);
    }



    return 0;
}


