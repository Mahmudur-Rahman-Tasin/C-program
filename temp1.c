#include <stdio.h>
#include<math.h>

//farenheit int input, celcius float output
int main()
{
    int f;float c;
    scanf("%d",&f);
    c=(f-32)*(5/9.0);
    printf("Celcius temp=%f",c);
  
    return 0;
}
