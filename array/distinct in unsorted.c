#include<stdio.h>
int main()
{
    int n=12;                                   //given
    int a[]={4,6,6,4,7,8,10,7,8,10,4,9},i,j,c;
    c=n;                                        //dhori shob distinct
    for(i=0;i<n-1;i++)                          //ekta num niye daner gulor sathe check until n-1
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                c--;
                break;
            }
        }
    }
    printf("%d",c);
    return 0;
}
