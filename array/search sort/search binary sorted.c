#include<stdio.h>
int main()
{
    int n,i,t,i2=-1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);

    int first=0, mid, last=n-1;
    for(;last>=first;)
    {
        mid=(first+last)/2;
        
        if(a[mid]<t) first=mid+1;                          //bamer gulo baad tai first mid er dane asbe
        else if(a[mid]>t) last=mid-1;
        else
        {
            printf("Found at index %d",mid);
            i2=mid;
            break;
        }
    }
    if(i2==-1) printf("Not found");
    return 0;
}
