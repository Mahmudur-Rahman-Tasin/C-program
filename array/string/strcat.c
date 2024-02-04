#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j=0;
    char s[100],t[100];
    gets(s);
    gets(t);
    for(i=0,j=strlen(s);i<strlen(t);i++,j++)
    {
        s[j]=t[i];
    }

    puts(s);
}
