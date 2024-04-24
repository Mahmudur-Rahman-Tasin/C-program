#include<stdio.h>

void sort(int ara[],int size)
{
    if(size==1) return;
    int i,max=ara[0],max_index=0;
    for(i=0;i<size;i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
            max_index=i;
        }
    }
    int temp=ara[size-1];
    ara[size-1]=ara[max_index];
    ara[max_index]=temp;

    sort(ara,size-1);
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    sort(ara,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}
