#include<stdio.h>

int main()
{
    int p1,p2,next,i,st,end;
    scanf("%d %d",&st,&end);
    for(i=3,p1=0,p2=1;i<=end;i++)
    {
        next=p1+p2;
        p1=p2;
        p2=next;
        if(next>=st && next<=end) printf("%d ",next);
    }
    return 0;
}
