#include<stdio.h>
#include<math.h>

int main()
{
    int num,digit;
    scanf("%d",&num);
    for(;num!=0;num=num/10)
    {
        digit=num%10;
    }
    return 0;
}
