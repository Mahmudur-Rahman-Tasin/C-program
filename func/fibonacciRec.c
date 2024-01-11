#include <stdio.h>

int fib(int n)
{
    if(n==0) return 0;                              //n=0 jaygay 0 hoye end
    else if(n==1) return 1;                         //n=1 jaygay 1 hobe
    else return fib(n-1)+fib(n-2);                  //n=2 theke shuru
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d-th fibonacci term is %d",num+1,fib(num));            // 0 1 1 2 3

    return 0;
}
