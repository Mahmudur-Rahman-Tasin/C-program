#include <stdio.h>

int main()
{
    int n=6,i,j;
    int a[]={10,20,30,20,40,50};
    int t=20,n2=n;    //position 2, index 1
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            for(j=i+1;j<n;j++)
            {
                a[j-1]=a[j];
            }
            n2--;
        }
    }
    for(i=0;i<n2;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
