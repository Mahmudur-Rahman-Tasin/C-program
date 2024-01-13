#include <stdio.h>

int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    i=1;
    while(i*i<=n)
    {
        if(n%i==0)
        {
            c++;
        }
        i++;
    }
    if(n>1 && c==1)
    {
        printf("Prime");
    }
    return 0;
}
