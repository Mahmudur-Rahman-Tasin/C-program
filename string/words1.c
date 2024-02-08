#include<stdio.h>
#include<string.h>
//words in a sentence ignoring punctuations
int main()
{

    int i,t;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        char str[100];

        gets(str);

        int count=0;

        char* token=strtok(str," ,!?. ");

        while(token!=0)
            {
                if(strlen(token)>0)
                    {
                        count++;
                    }

                token=strtok(0," ,!?. ");
            }
        printf("Count = %d\n",count);

    }

    return 0;
}
