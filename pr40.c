// Write a program to reverse string.
#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int i;

    printf("\nEnter String : ");
    gets(s);

    printf("\nReverse String : %s ", strrev(s));
}