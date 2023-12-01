#include<stdio.h>
#include<string.h>
//count alphabets in a string
int main()
{
    int n,i;
    scanf("%d",&n);
    getchar();

    for (i=0;i<n;i++)
    {
        int count[52]={0};
        char str[1002];
        gets(str);

        int j;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]>='A' && str[j]<='Z')
                count[str[j]-'A']++;
            else if(str[j]>='a' && str[j]<='z')
                count[str[j]-'a'+26]++;
        }
        for(j=0;j<52;j++)
        {
            if(count[j]>0)
            {
                if(j<26)
                    printf("%c = %d\n",j+'A',count[j]);
                else
                    printf("%c = %d\n",j+'a'-26,count[j]);

            }
        }
        if(i!=n-1)
        {
            printf("\n");
        }
    }
    return 0;
}
