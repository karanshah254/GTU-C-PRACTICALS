#include <stdio.h>
int main()
{
    int p, r, t;

    float simp_int;

    printf("\nEnter Principal Amount : \n");
    scanf("%d", &p);

    printf("\nEnter Rate : \n");
    scanf("%d", &r);

    printf("\nEnter Time Period : \n");
    scanf("%d", &t);

    simp_int = (p * r * t) / (100);
    printf("\nSimple Interest : \n", simp_int);
}