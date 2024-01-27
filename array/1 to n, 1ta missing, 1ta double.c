#include<stdio.h>
int main()
{
    int n=3,i,j,temp,sum=0,sum2=0;
    int a[]={3,1,3};

    for(i=0;i<n;i++)    //ascending sort                                    //seperate scan for every adjacent numbers
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
    for(i=1;i<=n;i++)   //sum diff thekei missing
    {
        sum=sum+i;
    }
    printf("%d\n",sum);

    for(i=0;i<n;i++)
    {
        sum2=sum2+a[i];
    }
    printf("%d\n",sum2);

    if(sum>sum2) printf("%d missing\n",sum-sum2+1);
    if(sum2>sum) printf("%d missing\n",sum2-sum+1);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]) printf("%d Repeats",a[j]);
        }
    }


    return 0;
}
