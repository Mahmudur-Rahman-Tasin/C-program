#include <stdio.h>

// Function to sort a row of a 2D array in ascending order using pointers
void sortRowAscending(int *row, int size) {
    int *ptr1, *ptr2, temp;
    for (ptr1 = row; ptr1 < row + size; ++ptr1) {
        for (ptr2 = row; ptr2 < row + size - 1; ++ptr2) {
            if (*ptr2 > *(ptr2 + 1)) {
                // Swap elements
                temp = *ptr2;
                *ptr2 = *(ptr2 + 1);
                *(ptr2 + 1) = temp;
            }
        }
    }
}

// Function to sort a 2D array in ascending order using pointers
void sort2DArrayAscending(int *arr[], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        sortRowAscending(*(arr + i), cols);
    }
}

// Function to print a 2D array
void print2DArray(int *arr[], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[][3] = {{5, 3, 8}, {1, 2, 7}, {4, 6, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("Original 2D array:\n");
    print2DArray(arr, rows, cols);

    // Sort the 2D array
    sort2DArrayAscending(arr, rows, cols);

    printf("\n2D array sorted in ascending order:\n");
    print2DArray(arr, rows, cols);

    return 0;
}
