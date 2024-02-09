#include <stdio.h>

int sumZeroRev(int sum)
{
    int n;
    if(sum==0)printf("Start taking input:\n");
    scanf("%d",&n);

    sum=sum+n;
    if(sum!=0)
    {
        sumZeroRev(sum);
        printf("%d ",n);
    }
    else if(sum==0) printf("Showing the results in reverse order: %d ",n);
    return 0;
}

int main()
{
    int sum=0;
    sumZeroRev(sum);
    return 0;
}
