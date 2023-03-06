// Write a function in the program to return 1 if number is prime otherwise return 0

#include <stdio.h>

int isprime(int);

void main()
{

    int n, c = 0;

    printf("\nEnter n: ");
    scanf("%d", &n);

    c = isprime(n);

    if (c > 0)
        printf("\nNumber %d is not prime number.\n", n);
    else
        printf("\nNumber %d is prime number.\n", n);
}

int isprime(int n)
{
    int i, c = 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
            break;
        }
    }
    return c;
}