
// Write a program to delete a character in given string.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void removeChar(char *str, char charToRemmove)
{
    int i, j;
    int len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == charToRemmove)
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }
}
void main()
{
    char str[100], ch;
    int i, j, len;

    printf("\nEnter the string : ");
    gets(str);

    fflush(stdin);
    printf("\nEnter a character you want to remove : ");
    scanf("%c", &ch);

    fflush(stdin);
    removeChar(str, ch);

    fflush(stdin);
    printf("\nString after removing '%c' is ==>  %s", ch, str);
}