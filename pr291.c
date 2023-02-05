/*
1. 

*
**
***
****


*/


#include<stdio.h>
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

    
}
