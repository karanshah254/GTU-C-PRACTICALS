#include <stdio.h>
int main()
{
    int a, b;

    printf("\nenter two numbers : \n");
    scanf("%d %d", &a, &b);

    printf("\n\n Sum == %d", a + b);
    printf("\n\n Diff == %d", a - b);
    printf("\n\n Product == %d", a * b);
    printf("\n\n Divi. == %d", a / b);
}