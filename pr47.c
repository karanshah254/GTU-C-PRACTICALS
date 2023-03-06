// Write a C program using global variable, static variable.

#include <stdio.h>

// Global variable
int a = 10;

// Static variable
static int b = 20;

int main()
{
    // Local variable
    int c = 30;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}