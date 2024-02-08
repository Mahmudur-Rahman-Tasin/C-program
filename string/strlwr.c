#include <stdio.h>

int main()
{
    int i=0;
    char s[]={"ENMITY Vanity"};
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
    }
    puts(s);
    return 0;
}
