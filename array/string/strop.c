#include <stdio.h>
// string.h strlen strcopy strcmp strcat strrev 
int myStrlen(char s[100])
{
    int i=0;
    while(s[i]!='\0')       // until null count
        i++;                // cseN i=3ta letter
    return i;
}
void myStrcpy(char to[100],char from[100])
{
    int i=0;
    while((to[i]=from[i])!='\0')    //assign until null
        i++;
    return;
}
int myStrcmp(char s[100],char t[100])
{
    int i;
    for(i=0;s[i]==t[i];i++) 
        if(s[i]=='\0') 
            return 0;
    return s[i]-t[i];   //
}
void myStrrev(char s[100])
{
    int i=0,j=myStrlen(s)-1; // j=2ta index
    char temp;
    for(;i<j;i++,j--)   //c and e interchange
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    return;
}
void myStrcat(char s[100], char t[100], char dest[100])
{
    int i=0, j=0;
    while((dest[i]=s[i])!='\0')     //assign s until null
        i++;
    while((dest[i++]=t[j++])!='\0') //assign t after that i
    ;
    return ;
}
int main()
{
    char s[100],t[100],r[100];
    gets(s);
    printf("string length=%d\n",myStrlen(s));
    myStrcpy(t, s);
    printf("copied string: ");
    puts(t);
    printf("Enter enter string to concatenate: ");
    gets(t);
    printf("concatenated string: ");
    myStrcat(s, t, r);
    puts(r);
    printf("Reversed concatenated string: ");
    myStrrev(r);
    puts(r);
    gets(t);
    int cmp=myStrcmp(s,t);
    printf("strcmp result: %d",cmp);
    
    return 0;
}
