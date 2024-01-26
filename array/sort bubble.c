#include<stdio.h>
int main()
{
    int n=5,i,j,temp;
    fflush(stdin);
    int a[]={4,89,0,4,-1};
    for(i=0;i<n;i++)                                    //seperate scan for every adjacent numbers
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])                               //a[i]>a[j] descending
            {
                temp=a[i];
                a[i]=a[j];
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
