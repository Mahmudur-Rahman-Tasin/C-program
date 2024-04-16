#include<stdio.h>

struct Student{
    char name[20];
    int std_id;
    double cgpa;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Student arr[n];//Declaration of struct array
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %lf",arr[i].name,&arr[i].std_id,&arr[i].cgpa);// taking input of the members of struct array objects
    }

    for(int i=0;i<n;i++)
    {
        printf("%s %d %lf\n",arr[i].name,arr[i].std_id,arr[i].cgpa);// printing the members of struct array objects
    }
}
