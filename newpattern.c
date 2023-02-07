/*

1a 2b 3c
1a 2b
1a



*/

#include <stdio.h>

int main()
{
    int i, j;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d%c ", j, 64+i);
        }
        printf("\n");
    }
    for(i=2; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d%c ", j, 64+i);
        }
        printf("\n");
    }
    return 0;
}