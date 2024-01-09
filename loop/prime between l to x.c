#include<stdio.h>

int main()
{
    int n,c,x,i,p=0,l;
    scanf("%d %d",&l,&x);

    for(n=l;n<=x;n++)
    {
        for(i=1,c=0;i*i<=n;i++)
        {
            if(n%i==0) c++;
        }
        if(c==1 && n!=1)
        {
            printf("%d ",n);
            p++;
        }
    }
    printf("\nTotal %d",p);

    return 0 ;
}
