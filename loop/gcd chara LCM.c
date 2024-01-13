#include <stdio.h>

int main()
{
    int a,b,min,max,i;
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    for(i=2;max%min!=0;max=max*i,i++)
    {

    }
    printf("%d",max);
    return 0;
}
