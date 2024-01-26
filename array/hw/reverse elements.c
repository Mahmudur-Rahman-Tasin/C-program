#include<stdio.h>
int main()
{
    int n=8,i,t;
    int a[]={4,89,34,39,56,74,4,5};
    t=a[0];
    a[0]=a[n-1];
    for(i=1;i<n/2;i++)                                // half ei interchange complete
    {
        int t1=a[i];
        a[i]=a[n-i-1];                               //a[1]=a[n-2];
        a[n-i-1]=t1;                                //a[2]=a[n-3];
    }
    a[n-1]=t;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
