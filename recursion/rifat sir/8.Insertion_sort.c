#include<stdio.h>

void Insertion_sort(int ara[], int pos, int size)
{
    if(pos==size) return;

    for(int i=0;i<pos;i++)
    {
        if(ara[i]>ara[pos])
        {
            int temp=ara[pos];
            for(int j=pos;j>=i+1;j--)
            {
                ara[j]=ara[j-1];
            }
            ara[i]=temp;
        }
    }
    Insertion_sort(ara, pos+1, size);
}

int main()
{
    int n;
    scanf("%d",&n);

    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    Insertion_sort(ara, 1, n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }

}
