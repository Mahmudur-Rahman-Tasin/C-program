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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)                      //descending bubble
        {
            if(a[i]<a[j])
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
    int nth;
    scanf(" %d",&nth);
    printf("\n %d tomo max is %d",nth,a[nth-1]);

    return 0;
}
