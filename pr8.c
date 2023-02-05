#include<stdio.h>
int main()
{
    //Write a C program to find that the accepted number is Negative, or Positive or Zero

    int i;

    printf("\nEnter Any Number Of Your Choice : ");
    scanf("%d",&i);

    if(i>=0)
    {
        if(i>0)
        {
            printf("\nNumber is positive");
        }
        else
        {
            printf("\nNumber is zero");
        }
    }
    else{
        printf("\nNumber is Negetive");
    }
}