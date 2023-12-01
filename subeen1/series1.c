#include <stdio.h>
#include <stdlib.h>
//Odd Summation series from 1 to user inputted number sequentially
int main()
{
   
    int i;
    float n,sum=0;//n is the last term of the series
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)continue;//excludes even numbers
        else sum=sum+i;//
    }

    printf("1+2+3+...+%f = %f",n,sum);


    return 0;
}
