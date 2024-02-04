#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j=0;
    char s[]={"what ifs"},t[100];
    for(i=0,j=strlen(s)-1;i<strlen(s);i++,j--)
    {
        t[i]=s[j];
    }

    puts(t);
}
