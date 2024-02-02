int main()
{
    int n,i;
    char s[100],t[100],c;
    gets(s);
    scanf("%c",&c);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==c) printf("index %d, position %d\n",i,i+1);
    }



    return 0;
}
