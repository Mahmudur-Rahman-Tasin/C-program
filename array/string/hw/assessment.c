#include <stdio.h>
//string.h needed ???
int main()
{
    int c,i;
    char s[100];
    gets(s);
    for(i=0,c=1;i<strlen(s);i++)
    {
        if(s[i+1]==s[i]) c++; // aaabcccc, s1=s0, s2=s1, not s3

        else if(c==1)
        {
            printf("%c",s[i]);
            c=1;
        }

        else
        {
            printf("%c%d",s[i],c);
            c=1;
        }
    }


    return 0;
}
