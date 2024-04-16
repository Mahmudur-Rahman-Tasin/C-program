#include<stdio.h>

typedef int abc;
typedef struct{
    char name[40];
    abc id;
    float cgpa;
}Student;

int main()
{
    Student s1;
    scanf("%s %d %f",s1.name, &s1.id, &s1.cgpa);
    printf("%s %d %f",s1.name,s1.id,s1.cgpa);
    return 0;
}
