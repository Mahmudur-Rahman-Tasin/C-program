#include <stdio.h>
#include <stdlib.h>

int** two_dimensional(int *ara, int n, int *total_rows, int *sizes_of_each_row)
{
    int i,j,k,rowno=1;
    for(i=0; i<n; ++i)
        if(*(ara+i)==-1) rowno++;
    *total_rows=rowno;

    int **result = (int**)malloc(rowno * sizeof(int*));


    k=0; // Starting index of the current row
    int row_index = 0; // Index for storing row size

    // Split the array into rows and store row sizes
    for (i=0; i<n; ++i)
    {
        // Check if the current element is -1 or it's the last element
        if (*(ara + i) == -1 || i == n - 1) {
            // Calculate the size of the current row
            int row_size = i - k;
            if (i == n - 1 && *(ara + i) != -1)
                row_size++; // Increment row size if the last element is positive


            *(sizes_of_each_row + row_index) = row_size;
            *(result + row_index) = (int*)malloc(row_size*sizeof(int));


            // Copy elements to the current row
            for (int j = 0; j < row_size; ++j) {
                *(*(result + row_index) + j) = *(ara + k + j);
            }

            // Move to the start of the next row
            k = i + 1;

            // Move to the next row
            row_index++;
        }
    }
    return result;
}
void Printing2D(int **ara2d, int *sizes_of_each_row, int rows)
{
    int i,j;

    for(i=0; i<rows; ++i)
    {
        for(j=0; j<*(sizes_of_each_row+i); ++j)
            printf("%d ", *(*(ara2d+i)+j));
        printf("\n");
    }
}
void sorting2D(int **ara2d, int *sizes_of_each_row, int rows)
{
    int i,j,k,temp;
    // bubble sort 2d acsending
    for(i=0; i<rows; ++i)
        for(j=0; j<*(sizes_of_each_row+i)-1; ++j)
            for(k=0; k<*(sizes_of_each_row+i)-j-1; ++k)
                if ( *(*(ara2d+i)+k) > *(*(ara2d+i)+k+1) )
                {
                    temp=*(*(ara2d+i)+k);
                    *(*(ara2d+i)+k)=*(*(ara2d+i)+k+1);
                    *(*(ara2d+i)+k+1)=temp;
                }
}
int main()
{
    int n,i;
    scanf("%d",&n);

    int *ara=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; ++i)
        scanf("%d", ara+i);

    int rowno = 0;
    int *sizes_of_each_row = (int*)malloc(n*sizeof(int));
    int **result = two_dimensional(ara, n, &rowno, sizes_of_each_row);

    // address passed to func and its value gets changed in that func, so rowno also changes. we dont need ara anymore
    free(ara);

    printf("\nGenerated 2D array:\n");
    Printing2D(result, sizes_of_each_row, rowno);
    printf("\nAfter Sorting:\n");
    sorting2D(result, sizes_of_each_row, rowno);
    Printing2D(result, sizes_of_each_row, rowno);

    free(sizes_of_each_row);
    free(result);

    return 0;
}
