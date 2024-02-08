#include <stdio.h>

int sumZeroRev(int sum)
{
    int n;
    scanf("%d",&n);
    
    sum=sum+n;
    if(sum!=0)
    {
        sumZeroRev(sum);
        printf("%d ",n);
    }
    else if(sum==0) printf("%d ",n);
    return 0;
}

int main()
{
    sumZeroRev(0);
    return 0;
}
