#include<stdio.h>
int main()
{
    int n,i,j,temp;
    fflush(stdin);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)                                    //seperate scan for every adjacent numbers
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])                               //a[i]<a[j] descending
            {
                temp=a[i];
                a[i]=a[j];  // min age jabe
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
