#include<stdio.h>
int main()
{
    int a[12]={7,8,9,10,12,14,14,14,22,36,77,81};
    int i,c;
    c=12;
    for(i=0;i<12-1;i++)
    {
        if(a[i]==a[i+1]) c--;
    }
    printf("%d ",c);

    return 0;
}
