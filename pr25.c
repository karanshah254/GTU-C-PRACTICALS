// Write a program to evaluate the series 1^2+2^2+3^2+……+n^2
// Sum Of Square Of First (n) Natural Numbers ......

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    int sum = 0;

    printf("\nEnter End Limit : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 2);
    }

    printf("\nSum Of Square Of First %d Natural Numbers Are : %d", n, sum);
}
