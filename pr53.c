/*

Design a structure student_record to contain name, branch and total marks obtained.
Develop a program to read data for 10 students in a class and print them.

*/
#include <stdio.h>
struct s_rec
{
    int m;
    char nm[50];
    char br[50];
} p[50];

int main()
{
    printf("\nLets Code\n");

    int i;
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Student %d name : ", i + 1);
        scanf("%s", p[i].nm);

        fflush(stdin);
        printf("\nEnter Branch Name of Student %d : ", i + 1);
        scanf("%s", p[i].br);

        printf("\nEnter Total Marks of student %d out of 100 : ", i + 1);
        scanf("%d", &p[i].m);
    }
}