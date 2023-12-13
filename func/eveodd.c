#include <stdio.h>

int evenOdd(int num)
{
    if (num%2==0) return 1;
    else if (num%2!=0) return 0;
}

int main()
{
    int x,result;
    scanf("%d",&x);
    result=evenOdd(x);
    if (result==1) printf("%d is even",x);
    else if (result==0) printf("%d is odd",x);

    return 0;
}
