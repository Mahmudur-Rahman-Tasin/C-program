#include <stdio.h>

int main()
{
    int n=12,i,j;
    int a[]={0,1,2,3,4,5,5,7,7,8,9,10};
    int f[n];
    for(i=0;i<n;i++)
    {
        f[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i]) f[i]++;
        }
    }
    for(i=0;i<n;i++)
        {
            printf("%d occurs %d times\n",a[i],f[i]);                       //duibar count??
            
        }
    return 0;
}
