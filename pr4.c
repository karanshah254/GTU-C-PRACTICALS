#include<stdio.h>
int main()
{
    int a,b;
    a=5;
    b=10;

    int temp;

    printf("\n | Before Swapping Numbers are : %d    %d  |",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("\n | After Swapping Number are :   %d     %d |",a,b);
}