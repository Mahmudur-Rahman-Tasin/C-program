#include<stdio.h>

int main()
{
   signed char n,r,rotated;

   printf("Enter value of n: ");
   scanf("%hhd", &n); //The %hhd means signed char

   printf("Enter value of r: ");
   scanf("%hhd", &r);

   //left rotation

   rotated=(n<<r)|(n>>(8-r));
   printf("After left rotation : %d\n",rotated);

   return 0;
}

/*output in codeblocks : 0
output in programiz : -85 */
