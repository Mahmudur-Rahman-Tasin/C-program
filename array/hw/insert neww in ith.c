#include<stdio.h>
int main()
{
    int n=8;
    int a[]={4,89,34,39,56,74,4,5},neww,ith,i;
    scanf("%d %d",&neww,&ith);
    a[ith-1]=neww;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
