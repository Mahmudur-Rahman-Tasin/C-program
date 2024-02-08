#include<stdio.h>

int main()
{
    //int ara1[][3];
    int ara1[][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int i,j;
    int size=sizeof(ara1)/sizeof(ara1[0]);
    printf("%d\n", size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",ara1[i][j]);
        }
        printf("\n");
    }
}
