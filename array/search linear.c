#include<stdio.h>
int main()
{
    int n,i,t,i2=-1;                                  
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);                              //test 3: 12,3,12. t=12. index 0,2
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            printf("Found at index %d\n",i);            
            i2=i;                                     
            //break;                                    only first occurrence
        }
        // else if(a[i]>t) break;                       if sorted
    }
    if(i2==-1) printf("Not found");

    return 0;
}
