#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d",&n);
    int a[n];                   // test 5, index 0 theke 4
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    t=a[0];                     //t te a0 jabe
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }                           //a3 te a4 jabe
    a[n-1]=t;                   //a4 e ager a0 ashbe

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
