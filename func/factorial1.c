#include <stdio.h>

long factorial(int n)
{
    long result=1;
    int i;
    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    return result;
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("Factorial using loop = %ld\n",factorial(x));

    return 0;
}
