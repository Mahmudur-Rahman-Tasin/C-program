#include<stdio.h>
int main()
{
    int n,i,j,temp,x,y;
    fflush(stdin);
    scanf("%d %d %d",&n,&x,&y);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=x-1;i<y-1;i++)                                    //seperate scan for every adjacent numbers
    {
        for(j=i+1;j<y-1;j++)
        {
            if(a[i]>a[j])                               //a[i]<a[j] descending
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
