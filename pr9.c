//Write a program to read marks of a student from keyboard whether the student is pass or fail(using if else)

#include<stdio.h>
int main()
{
    int marks;

    printf("\nenter Students Marks  out of 100 : ");
    scanf("%d",&marks);

    if(marks>=35)
    {
        printf("\nYou Are PASSSSSSS.....");
    }
    else{
        printf("\nReappear in remedial exam");
    }

}