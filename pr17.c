//Write a C program to find factorial of a given number.

#include<stdio.h>
int main()
{
    int i,a;
    int fact=1;

    printf("\nEnter No To Find FActorial : ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        fact=fact*i;

    }

    printf("\nfactorial Of %d is : %d",a,fact);
}