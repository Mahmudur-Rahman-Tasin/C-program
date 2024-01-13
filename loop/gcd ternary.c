#include <stdio.h>

int main()
{
    int a,b,min;
    scanf("%d %d",&a,&b);
    min=(a<b)? a:b;
    for(;min>=1;min--)
    {
        if(b%min==0 && a%min==0)
        {
            printf("%d",min);
            break;
        }

    }
    return 0;
}
