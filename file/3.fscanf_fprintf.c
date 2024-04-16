#include<stdio.h>
int main()
{
    int i, sum2=0;
    FILE *f2;


    /* open files */
    f2 = fopen("int_data.txt","w");
    /* write integers to files in binary and text format*/
    for(i=10;i<15;i++)
        fprintf(f2,"%d\n",i);
    fclose(f2);


    f2 = fopen("int_data.txt","r");
    while(fscanf(f2,"%d",&i)!=EOF)
    {
        sum2+=i;
        printf("text file: i=%d\n",i);
    } /*end while fscanf*/
    printf("text sum=%d\n",sum2);
    fclose(f2);
}
