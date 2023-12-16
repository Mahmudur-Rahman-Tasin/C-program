//Find the sum of the series x-x^3+x^5-...

#include<stdio.h>

int main()
{
    int i, n;
    float x, sum, t;

    scanf("%f",&x);
    scanf("%d",&n);
    t=x;
    sum=x;

    for(i=1;i<=n-1;i++)
    {
        t=(-1)*t*x*x;
        sum=sum+t;
    }

    printf(" The value of series is : %.4f", sum);
    return 0;
}
