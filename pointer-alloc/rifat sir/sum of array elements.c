#include<stdio.h>

int main()
{
    int x[]={5,9,6,3,7};
    int *p,sum=0,i;

    p=x; //or &x or &x[0]
    for(i=0;i<sizeof(x)/sizeof(x[0]);i++,p++) //no. of elements in array
    {
        sum=sum+*p;
    }
    printf("%d",sum);
}
