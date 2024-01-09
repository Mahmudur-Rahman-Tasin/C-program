#include<stdio.h>

int main()
{
    int n,p1,p2,next,i;
    scanf("%d",&n);
    printf("0 ");
    printf("1 ");
    for(i=3,p1=0,p2=1;i<=n;i++)
    {
        next=p1+p2;
        p1=p2;
        p2=next;
        printf("%d ",next);
    }
    return 0;
}
