#include<stdio.h>

int main()
{
    float marks[4][10];
    int i,j;

    for(i=0;i<3;i++)
    {
        printf("\nEnter marks for %d(th) term :\n",i+1);
        for(j=0;j<10;j++)
        {
            printf("\nStudent %d :",j+1);
            scanf("%f",&marks[i][j]);
        }
    }
    for(j=0;j<10;j++)
    {
        marks[3][j]=marks[0][j]/4.0 + marks[1][j]/4.0 + marks[2][j]/2.0;
        printf("\nRoll : %d  Total marks : %0.2f",j+1,marks[3][j]);
    }

    getch();
    return 0;
}
