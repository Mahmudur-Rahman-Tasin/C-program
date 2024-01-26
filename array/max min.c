#include<stdio.h>

int main()
{
    int i,c1,c2;
    int a[12]={14,21,36,14,12,9,8,22,7,81,77,10};           //input unsorted array
    int max=a[0],min=a[0];                                  //shurutei max dhori

    for(i=0;i<12;i++)
    {
        if(a[i]>max)
        {
             max=a[i];                                      //update max
             c1=i;
        }
        if(a[i]<min)
        {
             min=a[i];
             c2=i;
        }
    }
    printf("max %d, index %d \n",max,c1);
    printf("min %d, index %d \n",min,c2);
    return 0;
}
