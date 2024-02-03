#include <stdio.h>
#include <string.h>

int main()
{
    char s[]={"madam"};
    char t[100];
    strcpy(t,s);
    strrev(t);;
    if(strcmp(s,t)==0) printf("Palindrome");
    return 0;
}
