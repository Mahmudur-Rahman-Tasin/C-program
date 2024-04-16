#include<stdio.h>

struct Student{
    char name[20];
    int std_id;
};

int main()
{
    struct Student s1={"Anik", 1405001};
    struct Student s2={"Masum",1405002};

    printf("%s %d\n",s1.name,s1.std_id);
    printf("%s %d\n",s2.name,s2.std_id);
}
