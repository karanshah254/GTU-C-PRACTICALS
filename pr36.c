// Write a program to sort given array in ascending order 
// (Use Insertion sort, Bubble sort, Selection sort, Mergesort, Quicksort, Heapsort).

#include <stdio.h>

int main()
{
    int a[10], i, j, n, min, temp;

    printf("\n Enter How many numbers you want to enter: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n Enter Value at Position [%d] :", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = a[i];

        for (j = i + 1; j < n; j++)
        {

            if (a[j] < a[i])
            {
                min = j;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        printf(" %d ->", a[i]);
    }

    printf(" %d ->", a[i]);
}