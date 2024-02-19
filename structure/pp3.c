#include <stdio.h>
struct info
{
    char name[100];
    int accno;
    int balance;
};
void nameBalance200(struct info cust[100],int n)
{
    for(int i=0;i<n;i++)
    {
        if(cust[i].balance < 200) printf("%s\n",cust[i].name);
    }
}
void add100balance1000(struct info cust[100],int n)
{
    for(int i=0;i<n;i++)
    {
        if(cust[i].balance > 1000) cust[i].balance=cust[i].balance + 100 ;

    }
    for(int i=0;i<n;i++)
    {
        if(cust[i].balance > 1000)
        {
            printf("Incremented Value for acc.no. %d is %d dollars.\n",cust[i].accno,cust[i].balance);
        }
    }

}
int main()
{
    int i,n;
    scanf("%d",&n);
    fflush(stdin);
    struct info cust[n]; //array of variable list

    for(i=0;i<n;i++)
    {
        scanf("%s %d %d",cust[i].name ,&cust[i].accno, &cust[i].balance );
    }
    nameBalance200(cust,n);
    add100balance1000(cust,n);



    return 0;
}