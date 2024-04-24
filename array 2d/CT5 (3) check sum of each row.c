/*Take two integers as input indicating the number of rows and columns of an integer 2D matrix.
Then input all the elements of that array. Finally, you have to input another integer value, check.
Your task is to evaluate the summation of each row of the matrix. If the sum of that row is
greater than the check, eliminate that row. After that, store the “not eliminated” rows in another
2D matrix and print that resultant matrix.
[N.B. Use Pointer and Dynamic Memory Allocation. Do not use any []-operator. ]*/

#include <stdio.h>
#include <stdlib.h>

void printMatrix(int **matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, columns, check;

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Allocate memory for the matrix
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        *(matrix + i) = (int *)malloc(columns * sizeof(int));
    }

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", *(matrix + i) + j);
        }
    }

    // Input the value of check
    printf("Enter the value of check: ");
    scanf("%d", &check);

    // Evaluate the summation of each row and eliminate rows if sum > check
    int **resultMatrix = (int **)malloc(rows * sizeof(int *));
    int resultRows = 0;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += *(*(matrix + i) + j);
        }
        if (rowSum <= check) {
            *(resultMatrix + resultRows) = *(matrix + i);
            resultRows++;
        }
    }

    // Print the resultant matrix
    printf("Resultant matrix after eliminating rows:\n");
    printMatrix(resultMatrix, resultRows, columns);

    // Free dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        free(*(matrix + i));
    }
    free(matrix);
    free(resultMatrix);

    return 0;
}

