#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter the number of terms (n): ");
  scanf("%d", &n);

  if (n <= 0)
    {
        printf("Number of terms must be positive!\n");
        return 1;
    }

  for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
          sum=sum+i;
        }
        else
        {
          sum=sum-i;
        }
  }
  printf("The sum of the series is: %d\n", sum);

  return 0;
}
