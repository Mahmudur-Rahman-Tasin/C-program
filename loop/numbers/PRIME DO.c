#include <stdio.h>

int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    i=1;
    do
    {
        if(n%i==0)
        {
            c++;
        }
        i++;
    }
    while(i*i<=n);

    if(n>1 && c==1)
    {
        printf("Prime");
    }
    return 0;
}
