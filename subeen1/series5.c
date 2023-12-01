#include<stdio.h>

int main()
{
    int n,i,result=1;

    printf("\n1 * 2 * 3 * 4 * .... * n = ?");

    printf("\n\nEnter n : ");
    scanf("%d",&n);

    printf ("\nThe series is :");

    for(i=1;i<=n;i++)
    {
        result=result*i;

        if(i==1)
            printf("\n%d * ",i);
        else if(i==n)
            printf("%d  ",i);
        else
            printf("%d * ",i);

    }
    printf("\n\nResult = %d",result);

    getch();
    return 0;
}
