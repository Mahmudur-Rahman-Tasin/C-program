#include<stdio.h>

int main()
{
    int n,i;
    float sum=0;
    scanf("%d",&n);
    int a[n];                       
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("avg %f\n",sum/n);
    char c[n];                      //new array for grade, but prev loop ei grade print possible         
    for(i=0;i<n;i++)
    {
        if(a[i]>=80) c[i]='A';
        else if(a[i]>=70) c[i]='B';
        else if(a[i]>=60) c[i]='C';
        else if(a[i]>=50) c[i]='D';
        else c[i]='F';
    }
    for(i=0;i<n;i++)
    {
        printf("Jar marks %d tar grade %c\n",a[i],c[i]);
    }
    return 0 ;
}
