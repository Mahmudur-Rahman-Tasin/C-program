#include <stdio.h>

int fib(int n)
{
    if(n==1) return 0;                              //1st term 0 
    else if(n==2) return 1;                         //2nd term 1
    else return fib(n-1)+fib(n-2);                  //n=2 theke shuru, LAST IN
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d-th fibonacci term is %d",num,fib(num));            // 0 1 1 2 3

    return 0;
}
