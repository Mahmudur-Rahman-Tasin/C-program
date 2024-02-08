#include <stdio.h>

int main()
{
    char s[]={"madam"};
    //strlen
    int len=0;
    while(s[len] != '\0') len++;

    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(s[i] != s[j]) break;
    }

    if(i==j) printf("Palindrome");

    return 0;
}
