#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    int s=8*sizeof(x);
    int mask=1<<(s-1);

    int i;
    for(i=0;i<s;i++)
    {
        if(x&mask) printf("1");
        else printf("0");
        x=x<<1;
    }
}
