#include<stdio.h>

int main()
{
    int n,i,j,sum=0,p,dig,n1,n2;
    scanf("%d",&n);
    
    n1=n;
    n2=n;

    for(i=1;n!=0;i++)                   //i=digit number
    {
        n=n/10;
    }
        for(;n1!=0;n1=n1/10)
        {
            dig=n1%10;                  //seperate last digit
            for(p=1,j=1;j<i;j++)
            {
                p=p*dig;
            }
            sum=sum+p;
        }
    if(sum==n2) printf("Armstrong");
    return 0 ;
}
