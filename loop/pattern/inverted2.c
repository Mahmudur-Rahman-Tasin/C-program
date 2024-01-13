
#include<stdio.h>
 void triPattern(int n)
 {
     int i,j,k;
     for(i=n;i>0;i--){
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        for( k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
     }
 }

 int main()
 {
     int num;
     printf("Number: ");
     scanf("%d",&num);
     triPattern(num);
     return 0;
 }
