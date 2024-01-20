#include <stdio.h>
int commonfacno(int x, int y)
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
int relativeprime(int x, int y)
{
    if(commonfacno(x,y)==1) return 1;
    else return 0;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf(" No. of common factors %d",commonfacno(a,b));
    (relativeprime(a,b)==1)? printf("\nRelatively Prime"): printf("\nNot Relatively Prime");

    return 0;
}
