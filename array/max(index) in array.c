#include<stdio.h>

int main()
{
    int i,max,c;
    int a[12]={14,21,36,14,12,9,8,22,7,81,77,10};
    max=a[0];
    for(i=0;i<12;i++)
    {
        if(a[i]>max)
        {
             max=a[i];
             c=i;
        }
    }
    printf("Index %d = %d ",c,max);
    return 0;
}
