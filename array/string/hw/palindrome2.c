#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],t[100],r[100];
    gets(s);
    strcpy(t,s);
    if(strcmp(s,t)==0) printf("Palindrome");
    return 0;
}
