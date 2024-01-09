#include <stdio.h>

int main()
{
  int n, sum = 0;


  printf("Enter the upper limit (n): ");
  scanf("%d", &n);


  for (int i=1; i<= n; i++)
    {
        sum=sum+i*i;
    }


  printf("The sum of squares from 1 to %d is: %d\n", n, sum);

  return 0;
}
