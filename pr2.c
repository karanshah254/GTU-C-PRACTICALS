#include <stdio.h>
int main()
{
    int h, b;

    printf("\nEnter Height : \n");
    scanf("%d", &h);

    printf("\nEnter base : \n");
    scanf("%d", &b);

    float area = (0.5 * b * h);

    printf("\nArea Of Traingle ==>\n%f", area);
}