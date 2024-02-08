#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j=0;
    char s[100],t[100],r[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ') j=0;
        else if(j==0 && s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
            j++;
        }
    }


    puts(s);
}
