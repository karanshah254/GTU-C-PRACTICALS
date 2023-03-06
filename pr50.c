// Define a structure type struct personal that would contain person name, date of joining and salary using this structure to read this information of 5 people and print the same on screen.

#include <stdio.h>

struct personal
{
    char name[50];
    char date_of_joining;
    int salary;
};

int main()
{
    fflush(stdin);
    struct personal person[5];
    int i;

    for (i = 0; i < 1; i++)
    {
        fflush(stdin);
        printf("Enter name: ");
        scanf("%s", person[i].name);

        fflush(stdin);
        printf("Enter date of joining: ");
        scanf("%c", &person[i].date_of_joining);

        fflush(stdin);
        printf("Enter salary: ");
        scanf("%d", &person[i].salary);
    }

    fflush(stdin);
    printf("\nInformation of 5 people\n");

    fflush(stdin);
    printf("Name\tDate of Joining\tSalary\n");

    for (i = 0; i < 1; i++)
    {
        fflush(stdin);
        printf("%s\t%c\t\t%d\n", person[i].name, person[i].date_of_joining, person[i].salary);
    }
    return 0;
}