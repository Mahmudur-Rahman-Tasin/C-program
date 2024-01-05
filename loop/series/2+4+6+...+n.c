#include <stdio.h>

int main()
{
   int n,sum=0,i;
   printf("Enter the upper limit(even,n)=");
   scanf("%d",&n);
   for(i=2;i<=n;i=i+2)
   {
       sum=sum+i;
   }
   printf("Total sum is %d.",sum);
   return 0;
}
