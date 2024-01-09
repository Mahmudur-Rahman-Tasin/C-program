#include <stdio.h>
int main()
{
   int n,p=1,i,sum=0;
   scanf("%d",&n);

   for(i=1;i<=n;i++){
       p=p*2; //2 er power sobai
       sum=sum+p; //0 sathe 2^1 add hobe
   }
   
   printf("%d",sum);
   return 0;
}
