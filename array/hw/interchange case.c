#include<stdio.h>
int main()
{
    int n=10,i;
    char a[]="HelloWorld";                  //null kothay ekhane?
    for(i=0;a[i]!='\0';i++)                 // 65 A 97 a, diff 32
    {
        if(a[i]>='a' && a[i]<='z') a[i]=a[i]-32;
        else if(a[i]>='A' && a[i]<='Z') a[i]=a[i]+32;
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);                  //%s, a dileo hobe
    }

    return 0;
}
