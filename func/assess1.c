#include <stdio.h>
int commonfac(int x, int y)
{
    int i,c,min;

    if(x<y) min=x;
    else min=y;

    for(i=1,c=0; i<=min ;i++)
    {
        if(x%i==0 && y%i ==0) c++;
    }
    return c;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",commonfac(a,b));

    return 0;
}
