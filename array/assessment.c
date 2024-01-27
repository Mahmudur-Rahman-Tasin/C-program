#include<stdio.h>
int main()
{
    int x,i,y,n,j,t,x2,t2;
    scanf("%d",&x);//5
    double dem[x],sum;
    for(i=0;i<x;i++)
    {
        scanf("%lf",&dem[i]);
    }
    scanf("%d %d",&y,&n);//4 3
    for(t=1;t<=y;t++)                                    //next 4 week e 4 bar cholbe, y 1 theke 4
    {
        for(x2=x,sum=0,t2=1;t2<=n;t2++,x2--)             //moving avg, n 1 theke 3 porjonto LAST 3TA diye ber korbo
        {
            sum=sum+dem[x2-1];
        }
        printf("%lf ",sum/n);                            //left shift but shururta baad
        
        for(i=0;i<x-1;i++)
        {
            dem[i]=dem[i+1];
        }
        dem[x-1]=sum/n;                                  //notun ta last e
    }
    return 0;
}
