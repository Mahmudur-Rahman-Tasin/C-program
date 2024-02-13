#include<stdio.h>

void sort(int ara[],int pos,int size)
{
    if(pos==size-2) return;
    int i,min=ara[pos],min_index=pos,temp;
    for(i=pos;i<size-1;i++)
    {
        if(ara[i+1]<ara[i])
        {
           temp=ara[i+1];
ara[i+1]=ara[i];
ara[i]=temp;
          
        }
    }

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