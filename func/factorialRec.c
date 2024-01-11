#include <stdio.h>

long fact(int n)
{
    if(n!=0) return n*fact(n-1);                      // LAST IN, first out. 5*4*3*2*1 barbar recursive call
    else return 1;                                  //laste giye 1 lagbe tai, stopping criteria
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("Factorial using recursion = %ld\n",fact(x));

    return 0;
}
