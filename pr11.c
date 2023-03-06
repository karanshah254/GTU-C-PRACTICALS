// Write a C program to check whether the entered character is capital, small letter, digit or any special character.

#include <stdio.h>
int main()
{
    char ch;

    printf("\nEnter Any Character : \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\nCapital Letter");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\nSmall Letter");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("\nDigit");
    }
    else
    {
        printf("\nSpecial Character");
    }
}