#include <stdio.h>
#include<string.h>
#define MAX 100

int main()
{
	char str[MAX];
	int i;


	printf("Enter a string: ");
	gets(str);

	//capitalize first character of words
	for(i=0; str[i]!='\0'; i++)
	{
		//check first character is lowercase alphabet
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; //subtract 32 to make it capital
			continue; //continue to the loop
		}
		if(str[i]==' ')//check space
		{
			//if space is found, check next character
			++i;
			//check next character is lowercase alphabet
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; //subtract 32 to make it capital
				continue; //continue to the loop
			}
		}
		else
		{
			//all other uppercase characters should be in lowercase
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32; //subtract 32 to make it small/lowercase
		}
	}

	printf("\nCapitalized string is: %s\n",str);

    char* token=strtok(str,"   ,.?!-");
    printf("\nResult : \n");
    while(token!=0)
    {
        printf("%s\n",token);
        token=strtok(0,"   ,.?!-");
    }


	return 0;
}
