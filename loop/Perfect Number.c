#include<stdio.h>
int main()
{
    int n,i,b=0,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        b=n%i;
        if(b==0)
        {
            c=c+i;
        }

    }
    if(n==c)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }

return 0;
}
