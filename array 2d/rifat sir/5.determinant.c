#include <stdio.h>

int determinantOfMatrix(int matrix[3][3]) {
    int det;

    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
        - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
        + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    return det;
}

int main() {
    int matrix[3][3];

    // Input the elements of the matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and display the determinant
    int det = determinantOfMatrix(matrix);
    printf("Determinant of the matrix: %d\n", det);

    return 0;
}
