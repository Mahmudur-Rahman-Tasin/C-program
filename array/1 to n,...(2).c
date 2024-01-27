#include<stdio.h> 
 int main() 
 { 
 int n,i,missing,repeating,c; 
 printf("enter number n:"); 
 scanf("%d",&n); 
 int a[n]; 
  for (i=0;i<n;i++) 
  { 
      printf("enter number a[%d]:",i); 
      scanf("%d",&a[i]); 
 
  } 
  //for missing value 
  for(int i;i<=n;i++) 
  { 
      c=0; 
      for(int j=0;j<=n;j++) 
      { 
          if(i==a[j]) 
          { 
              c=c+1; 
          } 
      } 
      if(c==0) 
      { 
          missing=i; 
      } 
      else if(c==2) 
      { 
          repeating=i; 
      } 
  } 
 
printf("missing=%d\n",missing); 
printf("repeating=%d",repeating); 
 return 0; 
 }