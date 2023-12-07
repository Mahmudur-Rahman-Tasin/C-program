#include <stdio.h>

int main() {
    sum=0;
prod=1;
for(i=1; i<5; i++)
{
sum+=i;
prod*=i;
}
printf("sum, prod is %d, %d\n", sum, prod)

return 0;
}