#include <stdio.h>

int main()
{
  int n, sum, firstTerm = 2, multiplier = 2;

  printf("Enter the number of terms (n): ");
  scanf("%d", &n);
  if (n <= 0) {
    printf("Number of terms must be greater than 0!\n");
    return 1;
  }
  sum = firstTerm;
  for (int i = 1; i < n; i++) {
    firstTerm *= multiplier;
    sum += firstTerm;
  }
  printf("The sum of the series is: %d\n", sum);

  return 0;
}
