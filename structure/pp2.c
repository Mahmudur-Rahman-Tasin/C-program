#include <stdio.h>
struct info
{
    int roll;
    char name[100];
    int age;
    char address[100];
};
void name14(struct info stu[100],int n)
{
    for(int i=0;i<n;i++)
    {
        if(stu[i].age == 14) printf("%s\n",stu[i].name);
    }
}
void nameEvenRoll(struct info stu[100], int n)
{
    for(int i=0;i<n;i++)
    {
        if(stu[i].roll%2 == 0) printf("%s\n",stu[i].name);
    }
}
void detailsRoll(struct info stu[100], int n)
{
    int findroll;
    scanf("%d",&findroll);
    for(int i=0;i<n;i++)
    {
        if(findroll == stu[i].roll) printf("%s %d %s\n",stu[i].name ,stu[i].age, stu[i].address );
    }
}
int main()
{
    int i,n;
    scanf("%d",&n);
    fflush(stdin);
    struct info stu[n]; //array of variable list

    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %s",&stu[i].roll, stu[i].name ,&stu[i].age, stu[i].address );
    }
    name14(stu,n);
    nameEvenRoll(stu,n);
    detailsRoll(stu,n);



    return 0;
}