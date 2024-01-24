#include<stdio.h>

int main()
{
    int row,col,check,namta[10][10];
    int count=0,flag=0,sum=0;

    for(row=0;row<10;row++)
    {
        for(col=0;col<10;col++)
        {
            namta[row][col]=(row+1)*(col+1);
            printf("%d X %d = %d\n",(row+1),(col+1),namta[row][col]);
            check=namta[row][col];
            sum=sum+namta[row][col];

            if(check%2!=0)
            {
                count++;
            }
            else
            {
                flag++;
            }
        }
        printf("\n");
    }
    printf("\nodd numbers = %d",count);
    printf("\neven numbers = %d",flag);
    printf("\nsum = %d",sum);
    return 0;
}
