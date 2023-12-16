#include <stdio.h>
int main()
{
   int n,sum=0,i,j;
   printf("Input an integer number=");
   scanf("%d",&n);
   for(j=1;j<=n;j++)
   {
      if(j<n)
        printf("%d+",j);
      else printf("%d=",j);
   }
   for(i=1;i<=n;i++)
   {
       sum=sum+i;
   }
   printf("%d.\n",sum);
   return 0;
}
