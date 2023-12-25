#include<stdio.h>
int main()
{
    char xy;
    scanf("%c",&xy);
    if(xy>=48 && xy<=57)
    {
        printf("Digit");
    }
    else if((xy>=65 && xy<=90) || (xy>=97 && xy<=122))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Special");
    }
   return 0;
}