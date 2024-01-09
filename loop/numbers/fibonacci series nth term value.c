#include<stdio.h>

int main()
{
    int n,p1=1,p2=1,next;
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        next=p1+p2;
        p1=p2;
        p2=next;
    }
    if(n<=2) printf("%d",p1);
    else printf("%d",next);
    return 0;
}
