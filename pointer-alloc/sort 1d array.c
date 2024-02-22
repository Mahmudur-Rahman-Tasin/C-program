#include <stdio.h>

// Function to sort an array in ascending order using pointers
void sortAscending(int *arr, int size) {
    int *ptr1, *ptr2, temp;
    for (ptr1 = arr; ptr1 < arr + size; ++ptr1) {
        for (ptr2 = arr; ptr2 < ptr1; ++ptr2) {
            if (*ptr1 < *ptr2) {
                // Swap elements
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array
    sortAscending(arr, size);

    printf("Array sorted in ascending order: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
