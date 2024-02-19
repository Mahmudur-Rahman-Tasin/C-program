#include <stdio.h>
struct marks
{
    int roll;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percent;
};
int main()
{
    int i,n;
    scanf("%d",&n);
    fflush(stdin);
    struct marks stu[n]; //array of variable list
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d %d",&stu[i].roll, stu[i].name ,&stu[i].phy_marks ,&stu[i].chem_marks ,&stu[i].maths_marks );
        stu[i].percent=( stu[i].phy_marks +stu[i].chem_marks +stu[i].maths_marks )/3.0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d %s %f\n",stu[i].roll ,stu[i].name ,stu[i].percent );
    }
    return 0;
}