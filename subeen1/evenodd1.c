#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;


    while(n<10)
    {
        printf("If elseif else!\n");
        n++;
        printf("Hello world!\n");
        if(n%2==0){continue;}//in case of even number, when continue; occurs, lines after will be skipped to restart while
        printf("%d\n",n);//in case of 10, when continue; encounters, while restarts and check the condition then breaks
    }

    return 0;
}
