#include <stdio.h>
#include <string.h>
int main()
{
    char t[100],r[100];
    char s[]={"madam"};
    int i=0,j=0;
    for(i=strlen(s)-1,j=0;i>=0;i--,j++)
    {
        t[j]=s[i];
    }
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=t[i]) break;
    }
    if(i==strlen(s)) printf("Palindrome");

    return 0;
}
