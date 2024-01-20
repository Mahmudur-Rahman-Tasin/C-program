/*Write down a function numberOfCommonFactors(x,y) that will return how many common
factors are there between two numbers x and y.

Write down another function RelativePrime(x,y) that will return 1 if x and y are relatively
prime and 0 otherwise.

Two numbers are called relatively prime numbers if there is no common factor other than
1*/

#include<stdio.h>

int numberOfCommonFactors(int,int);
int RelativePrime(int,int);

int main()
{
  int p,q;

  printf("Please enter first number:");
  scanf("%d",&p);

  printf("Please enter second number:");
  scanf("%d",&q);

  numberOfCommonFactors(p,q);

  if(RelativePrime(p,q))
  {
    printf("They are Relatively Prime\n");
  }

  else
  {
    printf("They are not Relatively Prime\n");
  }

  return 0;
}
int numberOfCommonFactors(int p,int q)
{
    int min,count=0;

    if(p>q)
        min=q;
    else
        min=p;

    for(int i=1;i<=min;i++)
    {
        if(p%i==0 && q%i==0)
            count++;
    }
    printf("%d common factors\n",count);
}
int RelativePrime(int p,int q)
{
    int min,count=0;

    if(p>q)
        min=q;
    else
        min=p;

    for(int i=1;i<=min;i++)
    {
        if(p%i==0 && q%i==0)
            count++;
    }

    if(count==1)
        return 1;

    else
        return 0;
}
