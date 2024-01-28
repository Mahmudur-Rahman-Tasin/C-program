#include<stdio.h>
int main()
{
    int n=5,i,min,index,j,temp;
    int a[]={4,89,0,4,-1};
    for(i=0;i<n-1;i++)                                  //finding minimum and diving into sorted unsorted part
    {                                                   //more efficient as doesnt iterate adjacent every time
        min=a[i];
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])                                //a[j]>min descending
            {
                min=a[j];
                index=j;
            }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
