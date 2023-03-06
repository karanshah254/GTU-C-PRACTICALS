
// Write a program to find out which number is even or odd from list of 10 numbers using array

#include <stdio.h>
int main()
{
    int a[50], i, n;

    printf("\nEnter Limit : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Number %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("\nEven Nos are : \t%d\n", a[i]);
        }
        else
        {
            printf("\nOdd Nos Are : \t%d\n", a[i]);
        }
    }
}