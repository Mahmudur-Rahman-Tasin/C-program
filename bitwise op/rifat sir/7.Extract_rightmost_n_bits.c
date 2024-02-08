#include<stdio.h>

int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    int mask=~(~0<<n);
    int y=x&mask;
    printf("%d",y);s
}
