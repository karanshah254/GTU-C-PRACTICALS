// Write a program to find a character from given string.

#include <stdio.h>

int main()
{
    char str[20], ch, flag = 1;
    int i = 0;

    printf("\nEnter String : ");
    gets(str);

    printf("\nEnter Character to Search in String :");
    scanf("%c", &ch);

    printf("\nCharacter : ");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("%d", i + 1);
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("NOT FOUND");
    }
}