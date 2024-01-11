#include <stdio.h>

long fact(int n)
{
    if(n==0) return 1;                                  //  fact(0) te 1 hobe stopping criteria
    else return n*fact(n-1);                            // LAST IN, first out. n=1 theke shuru recursive call
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("Factorial using recursion = %ld\n",fact(x));

    return 0;
}
