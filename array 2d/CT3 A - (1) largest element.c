/*Take two integers m & n indicating the number of rows and columns respectively of a
matrix. Then take all the elements of the matrix as input. You have to identify the largest
number of each column of the matrix and print them. Now, write the C program.*/

#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];

    //input
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
           scanf("%d", &matrix[i][j]);
       }
    }


    printf("Largest number of each column:\n");
    for (int j = 0; j < n; j++)
    {
        int maxCol = matrix[0][j];
        for (int i = 1; i < m; i++)
        {
           if (matrix[i][j] > maxCol)
           {
              maxCol = matrix[i][j];
           }
        }

        printf("Column %d: %d\n", j+1, maxCol);
    }


    printf("Largest number of each row:\n");
    for (int i = 0; i < m; i++)
    {
        int maxRow = matrix[i][0];
        for (int j = 1; j < n; j++)
        {
           if (matrix[i][j] > maxRow)
           {
              maxRow = matrix[i][j];
           }
        }

        printf("Row %d: %d\n", i+1, maxRow);
    }

    return 0;
}

