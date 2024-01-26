#include<stdio.h>
int main()
{
    int n=12;                                        //given
    int a[]={7,8,9,10,12,14,14,14,22,36,77,81},i,c;
    c=n;                                            // shobai distinct
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) c--;                        // i+1 thakay index theke ekta kom porjonto loop
    }
    printf("%d ",c);

    return 0;
}
