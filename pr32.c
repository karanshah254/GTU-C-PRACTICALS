// Write a C program to read and store the roll no and marks of 20 students using array.

#include <stdio.h>
int main()
{
    int a[50], i, n;

    printf("\nEnter total students (max 20) : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Roll Number of Student %d : ", i + 1);

        scanf("%d", &a[i]);
    }
}