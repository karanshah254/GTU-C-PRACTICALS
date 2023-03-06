// Write a program to replace a character in given string.

#include <stdio.h>
int main()
{
    int i = 0;
    char s[50], ch;

    printf("Enter String : ");
    gets(s);

    printf("\nEnter Character u want to replace : ");
    scanf("%c", &ch);

    while (s[i] != '\0')
    {
        if (s[i] == ch)
        {
            s[i] = '*';
        }
        i++;
    }

    printf("\n=======================================\n");

    printf("\nString After Replacing %c by '*'", ch);

    printf("\n=======================================\n");

    printf("\n%s", s);
}