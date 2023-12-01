#include<stdio.h>

int main()
{
    int j,i,n;
    printf("line number : ");
    scanf ("%d",&n);



    for(j=1;j<=n;j++)
    {
        for(i=1;i<=j;i++)
        {
            printf("%d ",i);//printf("* ");
        }
        printf("\n");

    }


    getch();
    return 0;
}
