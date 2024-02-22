#include <stdio.h>
#include <stdlib.h>

int** two_dimensional(int *ara, int n, int *total_rows, int **sizes_of_each_row) {
    // Counting the number of rows
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (*(ara + i) == -1)
            count++;
    }
    *total_rows = count;

    // Allocating memory for sizes_of_each_row
    *sizes_of_each_row = (int*)malloc(count * sizeof(int));

    // Allocating memory for the 2D array
    int **result = (int**)malloc(count * sizeof(int*));

    // Filling the 2D array with data
    int index = 0;
    for (int i = 0; i < count; ++i) {
        int row_size = 0;
        while (*(ara + index) != -1) {
            row_size++;
            index++;
            if (index >= n) // Reached end of input array
                break;
        }
        (*sizes_of_each_row)[i] = row_size;
        *(result + i) = (int*)malloc(row_size * sizeof(int));
        for (int j = 0; j < row_size; ++j) {
            *(*(result + i) + j) = *(ara + index - row_size + j);
        }
        index++;
    }

    // Check if there are remaining elements after the last -1
    if (index < n) {
        int remaining_size = n - index;
        (*total_rows)++;
        (*sizes_of_each_row)[count] = remaining_size;
        result[count] = (int*)malloc(remaining_size * sizeof(int));
        for (int i = 0; i < remaining_size; ++i) {
            result[count][i] = ara[index + i];
        }
    }

    return result;
}

void Printing2D(int **ara2d, int *sizes_of_each_row, int rows) {
    int i, j;
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < *(sizes_of_each_row + i); ++j) {
            printf("%d ", *(*(ara2d + i) + j));
        }
        printf("\n");
    }
}

void sorting2D(int **ara2d, int *sizes_of_each_row, int rows) {
    int i, j, temp, k;
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < *(sizes_of_each_row + i) - 1; ++j) {
            for (k = 0; k < *(sizes_of_each_row + i) - j - 1; ++k) {
                if (*(*(ara2d + i) + k) > *(*(ara2d + i) + k + 1)) {
                    temp = *(*(ara2d + i) + k);
                    *(*(ara2d + i) + k) = *(*(ara2d + i) + k + 1);
                    *(*(ara2d + i) + k + 1) = temp;
                }
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *ara = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array separated by spaces: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", ara + i);
    }

    int total_rows;
    int *sizes_of_each_row;
    int **result = two_dimensional(ara, n, &total_rows, &sizes_of_each_row);

    printf("2D Array:\n");
    Printing2D(result, sizes_of_each_row, total_rows);

    sorting2D(result, sizes_of_each_row, total_rows);

    printf("2D Array after sorting each row:\n");
    Printing2D(result, sizes_of_each_row, total_rows);

    // Freeing memory
    free(ara);
    for (int i = 0; i < total_rows; ++i) {
        free(result[i]);
    }
    free(result);
    free(sizes_of_each_row);

    return 0;
}
