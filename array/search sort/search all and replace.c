#include<stdio.h>
int main()
{
    int n,i,t,neww,i2=-1;
    scanf("%d",&n);
    int a[n];
    int index[n],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&t,&neww);

    for(i=0;i<n;i++)                            
    {
        if(a[i]==t)
        {
            i2=i;
            index[c]=i;
            c++;

        }
    }
    if(i2==-1) printf("Not found\n");
    else
    {
        printf("Total occurrences %d\n",c);
        for(i=0;i<c;i++)                                    // RANGE!
        {
            printf("Found at index %d of input array\n",index[i]);
        }
    }
    for(i=0;i<c;i++)
    {
        a[index[i]]=neww;
    }
    printf("New array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
