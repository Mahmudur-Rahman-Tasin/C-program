#include <stdio.h>
int main()
{
   int term,i,sum=0;

   scanf("%d",&term);

   for(i=1;i<=term;i++){

       if(i%2==0) sum=sum-i;

       else sum=sum+i;
   }

   printf("%d",sum);
   
   return 0;
}
