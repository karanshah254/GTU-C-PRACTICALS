
/*

2.

* * * * *
* * * *
* * *
* *
*


*/

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("\nEnter Number Of Rows : ");
    scanf("%d", &n);

    for (int i = n + 1; i > 1; i--)
    {
        for (int j = i; j > 1; j--)
        {
            printf(" *");
        }

        printf("\n");
    }
}