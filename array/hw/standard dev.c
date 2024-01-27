#include<stdio.h>
#include<math.h>

int main()
{
    int n=6,i;
    double a[]={9.2,1.5,6.7,8.2,5.5,7.1},sum=0,mean=0;
    for(i=0;i<n;i++) sum=sum+a[i];
    mean=sum/n;
    sum=0;
    for(i=0;i<n;i++) sum=sum+pow(a[i]-mean , 2);
    printf("%lf",sqrt(sum/n));


    return 0;
}
