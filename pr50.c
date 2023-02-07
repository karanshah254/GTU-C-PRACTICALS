// Define a structure type struct personal that would contain person name, date of joining and salary using this structure to read this information of 5 people and print the same on screen.

#include<stdio.h>

struct personal
{
    char name[50];
    int date_of_joining;
    int salary;
};

int main()
{
    struct personal person[5];
    int i;
    
    for(i=0;i<5;i++)
    {
        printf("Enter name: ");
        scanf("%s",person[i].name);
        printf("Enter date of joining: ");
        scanf("%d",&person[i].date_of_joining);
        printf("Enter salary: ");
        scanf("%d",&person[i].salary);
    }
    
    printf("\nInformation of 5 people\n");
    
    printf("Name\tDate of Joining\tSalary\n");
    
    for(i=0;i<5;i++)
    {
        printf("%s\t%d\t\t%d\n",person[i].name,person[i].date_of_joining,person[i].salary);
    }
    return 0;
}