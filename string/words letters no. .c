#include <stdio.h>

int main()
{
    int i,j,w=1,l=0,v=0;
    char s[]={"sanity enmity"};
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ') w++;
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) l++;
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') v++;
    }
    printf("%d %d %d %d",w,l,v,l-v);


    return 0;
}
