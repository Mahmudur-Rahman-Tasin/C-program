#include<stdio.h>
#include<conio.h>
int main()
{
    int t,t1,i,j,k,l,n,m,temp,flag;
    printf("\nEnter number of test case : ");
    scanf("%d",&t);

    //number of test case
    for(t1=0;t1<t;t1++)
    {
        printf("\n\nEnter number of elements of the first array : ");
        scanf("%d",&m);
        int arr1[m];

        for(i=0;i<m;i++)
        {
            scanf("%d",&arr1[i]);
        }

        printf("\nEnter number of elements of the second array : ");
        scanf("%d",&n);
        int arr2[n];

        for(i=0;i<n;i++)
        {
            scanf("%d",&arr2[i]);
        }

        //merge in a new array
        int arr3[20];

        for(i=0,k=0; i<(m+n) ;i++)
        {
            if(i<m) // age m jabe 
            {
                arr3[i]=arr1[i];
            }

            else
            {
                arr3[i]=arr2[k];
                k++;
            }
        }

        printf("\nMerged array : ");
        for(i=0; i<(m+n); i++)
        {
            printf("%d ",arr3[i]);
        }

        //bubble sort
        printf("\nSorted array : ");

        for(i=0; i<m+n-1; i++)
        {
            flag=0;
            for(j=0; j<m+n-1-i; j++)
            {
                if(arr3[j]>arr3[j+1])
                {
                    temp=arr3[j];
                    arr3[j]=arr3[j+1];
                    arr3[j+1]=temp;
                    flag=1;
                }
            }
            if(flag==0)
                break;
        }
        for(i=0;i<m+n;i++)
        {
            printf("%d ",arr3[i]);
        }
        //removing duplicate
        printf("\nRemoving duplicates : ");

        int size=m+n;

         for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++) //ekta num niye daner shobar sathe check
        {
            /* If any duplicate found */
            if(arr3[i] == arr3[j])
            {
                /* Delete the current duplicate element */
                for(k=j; k < size - 1; k++)
                {
                    arr3[k] = arr3[k + 1];
                }

                /* Decrement size after removing duplicate element */
                size--;

                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }

        for(i=0; i<size; i++)
    {
        printf("%d ", arr3[i]);
    }





    }


     return 0;
}
