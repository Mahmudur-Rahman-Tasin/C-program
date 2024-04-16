
#include <stdio.h>
#include <string.h>

int main()
{

  /* taking input for an array of structures and sorting it */

    struct p
    {
        char name[100];
        int age;
    } people[10];

    FILE *fp;
    fp=fopen("Student_details.txt","r");


    int i, j, numPeople;



    fscanf(fp, "%d", &numPeople);

    for (i = 0; i < numPeople; i++){

        printf("\n\nPerson No. %d\n", i+1);


        fscanf(fp, "%s",&people[i].name);
        printf("Name:  %s ",people[i].name);


        fscanf(fp, "%d", &people[i].age);
        printf("Age:   %d",people[i].age);
    }


    fclose(fp);

    int temp_age;
    char temp_name[100];


    // sorting by age

    for (i = 0; i < numPeople-1; i++){
        for (j = i+1; j < numPeople; j++){
            if (people[i].age > people[j].age){

                temp_age = people[i].age;
                strcpy (temp_name, people[i].name);

                people[i].age = people[j].age;
                strcpy (people[i].name, people[j].name);

                people[j].age = temp_age;
                strcpy (people[j].name, temp_name);
            }
        }
    }

    printf("\n\n\n");

    // It is possible (and much easier) to declare a structure of type p and copy people[i] to it while sorting.

    fp=fopen("SortedStudentDetails.txt","w+");
    for (i = 0; i < numPeople; i++)
        fprintf(fp,"%s %d\n", people[i].name, people[i].age);

    fclose(fp);

    //printf("%d", sizeof(struct p));


    return 0;

}
