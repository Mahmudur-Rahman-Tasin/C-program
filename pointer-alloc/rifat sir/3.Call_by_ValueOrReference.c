#include<stdio.h>

void swap( int a, int b )
{
   int temp;
   temp= a;
   a= b;
   b = temp ;
   printf ("Swap function call: a=%d  b=%d\n", a, b);
}

void swap1( int *a, int *b )
{
   int temp;
   temp= *a;
   *a= *b;
   *b = temp ;
   printf ("Swap1 function call: a=%d  b=%d\n", *a, *b);
}


int main ( )
{
   int a = 5, b = 6;
   printf("a=%d b=%d\n",a,b);
   swap(a,b);
   printf("a=%d b=%d\n",a,b);
   swap1(&a, &b) ;
   printf("a=%d b=%d\n",a,b);
   return 0 ;
}


