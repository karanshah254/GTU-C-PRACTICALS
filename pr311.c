/*

A A A A A
B B B B
C C C
D D
E

*/

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i + 1; j++)
        {
            printf("%c", 64 + i);
        }
        printf("\n");
    }
    return 0;
}