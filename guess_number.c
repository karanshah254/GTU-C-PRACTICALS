#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int count = 0, count1 = 0;

    printf("\nEnter how many times user gets chance to guess the number : ");
    scanf("%d", &n);

    int comp_number;
    int user_number;

    for (int i = 1; i <= n; i++)
    {
        comp_number = rand() % 100 + 1; // 100 + 1 is done so that number starts from 1 and lies between 1 to 100

        printf("\nEnter user's choice number : ");
        scanf("%d", &user_number);

        printf("\nComputer generated number is : %d", comp_number);

        if (user_number == comp_number)
        {
            printf("\n\n\tUser Won");
            count++;
        }
        else
        {
            printf("\n\n\tComputer Wins");
            count1++;
        }
    }

    printf("\nFinal Score : \n");

    printf("\n  User Score    |    Computer Score    ");
    printf("\n     %d          |          %d         ", count, count1);

    return 0;
}