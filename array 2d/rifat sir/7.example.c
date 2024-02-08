#include<stdio.h>
#include<string.h>

int main()
{
    int n,m;
    //Input first list of words
    scanf("%d",&n);
    char ara1[n][21];
    for(int i=0;i<n;i++)
    {
        scanf("%s",ara1[i]);
    }

    //Input second list of words
    scanf("%d",&m);
    char ara2[m][21];
    for(int i=0;i<m;i++)
    {
        scanf("%s",ara2[i]);
        int j;
        for(j=0;j<n;j++)
        {
            if(strcmp(ara1[j],ara2[i])==0)
            {
                printf("OUTPUT: Yes\n");
                break;
            }
        }
        if(j==n) printf("OUTPUT: No\n");
    }


}
