#include <stdio.h>
#include <stdlib.h>

// Function to split the 1D array into a 2D array based on -1
int** two_dimensional(int *ara, int n, int *total_rows, int *sizes_of_each_row) {
    int count = 1; // Start from 1 row
    for (int i = 0; i < n; ++i) {
        if (*(ara + i) == -1)
            count++; // Increment row count when encountering -1
    }
    *total_rows = count; // Update total_rows variable

    // Allocate memory for the 2D array and row sizes
    int **result = (int**)malloc(count * sizeof(int*));
    if (result == NULL)
        return NULL; // Memory allocation failed

    // Initialize variables for tracking row creation
    int row_start = 0; // Starting index of the current row
    int row_index = 0; // Index for storing row size

    // Split the array into rows and store row sizes
    for (int i = 0; i < n; ++i) {
        // Check if the current element is -1 or it's the last element
        if (*(ara + i) == -1 || i == n - 1) {
            // Calculate the size of the current row
            int row_size = i - row_start;
            if (i == n - 1 && *(ara + i) != -1)
                row_size++; // Increment row size if the last element is positive

            // Store the size of the current row
            *(sizes_of_each_row + row_index) = row_size;

            // Allocate memory for the current row
            *(result + row_index) = (int*)malloc(row_size * sizeof(int));
            if (*(result + row_index) == NULL)
                return NULL; // Memory allocation failed

            // Copy elements to the current row
            for (int j = 0; j < row_size; ++j) {
                *(*(result + row_index) + j) = *(ara + row_start + j);
            }

            // Move to the start of the next row
            row_start = i + 1;

            // Move to the next row
            row_index++;
        }
    }

    return result; // Return the 2D array
}

// Function to print the 2D array
void Printing2D(int **ara2d, int *sizes_of_each_row, int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < *(sizes_of_each_row + i); ++j) {
            printf("%d ", *(*(ara2d + i) + j));
        }
        printf("\n");
    }
}

// Function to sort each row of the 2D array separately
void sorting2D(int **ara2d, int *sizes_of_each_row, int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < *(sizes_of_each_row + i) - 1; ++j) {
            for (int k = 0; k < *(sizes_of_each_row + i) - j - 1; ++k) {
                if (*(*(ara2d + i) + k) > *(*(ara2d + i) + k + 1)) {
                    int temp = *(*(ara2d + i) + k);
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

    // Allocate memory for the input array
    int *ara = (int*)malloc(n * sizeof(int));
    if (ara == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input array elements
    printf("Enter the elements of the array separated by spaces: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", ara + i);
    }

    int total_rows = 0;
    // Allocate memory for storing row sizes
    int *sizes_of_each_row = (int*)malloc(n * sizeof(int));
    if (sizes_of_each_row == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Split the array into rows
    int **result = two_dimensional(ara, n, &total_rows, sizes_of_each_row);
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the generated 2D array
    printf("\nGenerated 2D array:\n");
    Printing2D(result, sizes_of_each_row, total_rows);

    // Sort each row of the 2D array
    sorting2D(result, sizes_of_each_row, total_rows);

    // Print the sorted 2D array
    printf("\nAfter Sorting:\n");
    Printing2D(result, sizes_of_each_row, total_rows);

    // Free dynamically allocated memory
    free(ara);
    free(sizes_of_each_row);
    for (int i = 0; i < total_rows; ++i) {
        free(result[i]);
    }
    free(result);

    return 0;
}
