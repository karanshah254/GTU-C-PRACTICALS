// Write a C program to find out distance travelled by the equation d = ut + at^2
#include <stdio.h>
int main()
{
    int u, a, t;
    float d;

    printf("\nenter Distance : ");
    scanf("%d", &u);

    printf("\nenter time : ");
    scanf("%d", &t);

    printf("\nenter Accelaration : ");
    scanf("%d", &a);

    d = (u * t) + (0.5 * a * t * t);

    printf("\nDistance : %f", d);
}