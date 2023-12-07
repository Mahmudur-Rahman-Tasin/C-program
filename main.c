#include <stdio.h>

int main()
{
    int n=0;
    printf ("Characters: %c %c \n", 'a', 65);
printf ("Decimals: %d %ld\n", 1977, 650000L);
printf ("Preceding with blanks: %10d \n", 1977);
printf ("Preceding with zeros: %010d \n", 1977);
printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 
100, 100, 100);
printf ("floats: %0.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
printf ("%s \n", "A string")x;
printf (“Width trick: %8d \n", 10);
return 0;

    scanf("%d",&n);
    printf("value of n=%d",n);

    return 0;
}

