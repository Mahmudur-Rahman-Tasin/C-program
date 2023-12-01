#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 10

int binary_search(int array[],int data)
{
    int l,r,mid;
    l=0;
    r=MAX_SIZE;

    while(l<=r)
    {
        mid=(l+r)/2;

        if(data==array[mid])
            {
                printf("%d found. Position : %d",data,mid+1);
                break;
            }

        else if(data>array[mid])
            l=mid+1;
        else
            r=mid-1;
    }

    if(l>r)
        printf("%d not found",data);
}



int main()
{
    int array [MAX_SIZE],i,element;
    printf("Enter %d numbers\n",MAX_SIZE);
    for(i=0;i<MAX_SIZE;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter Element to Search : ");
    scanf("%d", &element);

    binary_search(array,element);
    getch();

}
