#include <stdio.h>
#include <string.h>
int myStrcmp(char s[100],char t[100])
{
    int i;
    for(i=0;s[i]==t[i];i++)
        if(s[i]=='\0')
            return 1;
    return 0;   //
}
int main()
{
    int n,i;
    char s[100],t[100];
    gets(s);
    gets(t);
    if(myStrcmp(s,t)==1) printf("Same");


    return 0;
}
