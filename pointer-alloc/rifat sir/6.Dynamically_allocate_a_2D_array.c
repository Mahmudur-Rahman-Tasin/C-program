#include <stdio.h>
#include <stdlib.h>


int main()
{

    int r = 3, c = 4;

    /////////1.Using a single pointer
    int *arr = (int *)malloc(r * c * sizeof(int));

    int i, j, count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         *(arr + i*c + j) = ++count;

    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", *(arr + i*c + j));
    printf("\n\n\n");

    free(arr);



    /////////2.Using an array of pointers
    int *arr1[r];
    for (i=0; i<r; i++)
         //arr1[i] = (int *)malloc(c * sizeof(int));
         *(arr1+i) = (int *)malloc(c * sizeof(int));

    // Note that arr1[i][j] is same as *(*(arr1+i)+j)
    count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         //arr1[i][j] = ++count; // Or *(*(arr1+i)+j) = ++count
         *(*(arr1+i)+j)=++count;

    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         //printf("%d ", arr1[i][j]);
         printf("%d ", *(*(arr1+i)+j));
    printf("\n\n\n");

    for (i=0; i<r; i++)
         free(*(arr1+i));



    //////3.Using pointer to a pointer
    int **arr2 = (int **)malloc(r * sizeof(int *));
    for (i=0; i<r; i++)
         //arr2[i] = (int *)malloc(c * sizeof(int));
         *(arr2+i) = (int *)malloc(c * sizeof(int));

    // Note that arr2[i][j] is same as *(*(arr2+i)+j)
    count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         //arr2[i][j] = ++count;  // OR *(*(arr2+i)+j) = ++count
         *(*(arr2+i)+j) = ++count; // first ei 1 ashbe

    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         //printf("%d ", arr2[i][j]);
         printf("%d ", *(*(arr2+i)+j));
    printf("\n\n\n");

    free(arr2);



    /////4.Using double pointer and one malloc call
    int len=0;
    int *ptr, **arr3;
    count = 0;

    len = sizeof(int *) * r + sizeof(int) * c * r;
    arr3 = (int **)malloc(len);

    // ptr is now pointing to the first element in of 2D array
    ptr = (int *)(arr3 + r);

    // for loop to point rows pointer to appropriate location in 2D array
    for(i = 0; i < r; i++)
        //arr3[i] = (ptr + c * i);
        *(arr3+i)= (ptr + c * i);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            //arr3[i][j] = ++count; // OR *(*(arr3+i)+j) = ++count
            *(*(arr3+i)+j) = ++count;

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            //printf("%d ", arr3[i][j]);
            printf("%d ", *(*(arr3+i)+j));

   /* Code for further processing and free the
      dynamically allocated memory */
   return 0;
}

