#include <stdio.h>

int main()
{
    int c,i,j;
    char s[]={"sanity enmity"};
    char w[]={"enmity"};
    for(i=0;i<strlen(s);i++,j++)
    {
        if(s[i]==w[0])  //first letter match
        {
            for(j=1;j<strlen(w);j++)
            {
                if(s[i+j]!=w[j]) break;   //next letters match kore j increment
            }
            if(j==strlen(w))
            {
                printf("%d",i);
                break;
            }
        }

    }


    return 0;
}
