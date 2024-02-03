#include <stdio.h>

int main()
{
    char str[]={"madam"};
    //strlen
    int len=0;
    while(str[len] != '\0') len++;

    int i=0,j=len-1;

    for(i=0,j=len-1;i<=j;i++,j--)
    {
        if(str[i] != str[j]) break;
    }

    if(i>=j) printf("Palindrome");

    return 0;
}
