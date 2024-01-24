#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]%2!=0) printf("%d ",num[i]);
    }
    return 0 ;
}
