#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    char s[100];
    gets(s);
    for(i=0;i<=strlen(s);i++)
    {
        printf("%c\n",s[i]);
    }


    return 0;
}
