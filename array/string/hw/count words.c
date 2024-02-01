#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j=1;
    char s[100],t[100],r[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ') j++;
    }

    printf("%d",j);
}
