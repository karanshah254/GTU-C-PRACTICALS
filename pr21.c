//Write a C program to find the sum and average of different numbers which are accepted by user as many as user wants.

#include<stdio.h>
int main()
{
    int sum=0,a[50],i,n;


    printf("\nEnter Numbers of USer Choice : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter Number %d :  ",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    printf("\nSum Of %d numbers are : %d",n,sum);
}