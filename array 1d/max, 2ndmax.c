#include<stdio.h>
int main()
{
    int i,max,max2,t;
    int a[12]={14,21,36,14,12,9,8,22,7,81,77,10};
    if(a[0]>a[1])
    {
        max=a[0];
        max2=a[1];
    }
    else
    {
        max=a[1];
        max2=a[0];
    }
    for(i=2;i<12;i++)                   //3rd num theke check
    {
        t=a[i];
        if(t>=max)
        {
            max2=max;
            max=t;
        }
        else if(t>max2) max2=t;
    }
    printf("%d %d",max,max2);
    return 0;
}
