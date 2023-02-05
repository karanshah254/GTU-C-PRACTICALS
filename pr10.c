//Write a program to read three numbers from keyboard and find out maximum out of these three. (nested if else)

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\nEnter 3 Numbers a , b , c Of User Choice : \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("\na is maximum");
        }
        else
        {
            printf("\nc is maximum");
        }
    }
    else if(b>c)
    {
        printf("\nb is maximum");
    }
    else{
        printf("\nc is maximum");
    }


}