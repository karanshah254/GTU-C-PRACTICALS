/*
1. 

*
**
***
****


2.


*****
****
***
**
*

*/


#include<stdio.h>
void q1();
int main()

{
    int i,n;
    int j;


    printf("\nEnter Number Of Rows : ");
    scanf("%d",&n);

    printf("\n");

    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf("*");
        }

        printf("\n");

    }

    q1();
}
void q1()
{
    printf("\n\n\n");
    int n,i,j;
    
    for(int i=n;i>1;i--)
    {
        for(int j=i;j>i;j--)
        {
            printf("*");
        }

        printf("\n");
    }
}