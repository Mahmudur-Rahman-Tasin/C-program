#include <stdio.h>

long factorialRecursive(int n)
{
    if(n==0)return 1;
    else return n*factorialRecursive(n-1);
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("Factorial using recursion = %ld\n",factorialRecursive(x));

    return 0;
}
