#include<stdio.h>

int main()
{
    int n,i,j,sum=0,p,dig,n1,n2;
    scanf("%d",&n);

    n1=n;
    n2=n;

    for(i=0;n!=0;i++)                   //i=digit number
    {
        n=n/10;
    }
        for(;n1!=0;n1=n1/10)
        {
            dig=n1%10;                  //seperate last digit
            for(p=1,j=1;j<=i;j++)                //(371,i=3 ; dig=7,p=1,j=1 ; p=1*7=7,j=2 ; p=7*7=49,j=3 ; p=49*7=343,j=4 ;
            {
                p=p*dig;
            }
            sum=sum+p;
        }
    if(sum==n2) printf("Armstrong");
    return 0 ;
}
