#include<stdio.h>

int main()
{
    int a[3][3],i,j,sum=0;

    printf("Enter the elements : ");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("\nA[%d][%d] = ",i,j);
             scanf("%d",&a[i][j]);
         }
     }
     printf("\nEntered Matrix : \n");

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");
     }
     printf("Diagonal elements : ");

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             if(i==j)
             {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
             }
         }

     }

     printf("\nTrace : %d",sum);

    getch();
    return 0;
}
