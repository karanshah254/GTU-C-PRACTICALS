// Write a program to read marks from keyboard and your program should display equivalent grade according to following table(if else ladder) Marks Grade 100 – 80 Distinction 79 – 60 First Class 59 – 40 Second Class < 40 Fail

#include <stdio.h>
int main()
{
    int marks;

    printf("\nEnter marks :\n");
    scanf("%d", &marks);

    if (marks >= 80 && marks < 100)
    {
        printf("\nDistintion");
    }
    else if (marks >= 60)
    {
        printf("\nfirst class");
    }
    else if (marks >= 40)
    {
        printf("\nsecond class");
    }
    else
    {
        printf("\nfail");
    }
}