#include<stdio.h>

void sort(int ara[],int pos,int size)
{
    if(pos==size-1) return;
    int i,min=ara[pos],min_index=pos;
    for(i=pos;i<size;i++)
    {
        if(ara[i]<min)
        {
            min=ara[i];
            min_index=i;
        }
    }
    int temp=ara[pos];
    ara[pos]=ara[min_index];
    ara[min_index]=temp;

    sort(ara,pos+1,size);
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

    sort(ara,0,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}

