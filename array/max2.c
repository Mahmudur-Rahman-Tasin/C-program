#include<stdio.h>
int main()
{
    int i,max,max2,c1,c2;
    int a[12]={14,21,36,14,12,9,8,22,7,81,77,10};               
    if(a[0]>a[1])
    {
        max=a[0];
        max2=a[1];
    }
    else
    {
        max=a[1];                             //a1 max, a2 second
        max2=a[0];
    }
    for(i=2;i<12;i++)                         //check from 3rd
    {
        if(a[i]>=max)
        {
            max2=max;                        //ager max jabe max2 te
            max=a[i];                        //a2 new max
            c1=i;

        }
        else if(a[i]>max2)                   //othoba a2 new max2
        {
             max2=a[i];                      //ager max2 overwrite
             c2=i;
        }
    }
    printf(" max %d, index %d \n 2nd %d, index %d",max,c1,max2,c2);
    return 0;
}
