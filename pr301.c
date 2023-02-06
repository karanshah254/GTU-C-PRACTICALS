/*
1.


1
12
123
1234
12345



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
                printf("\t %d ",j);
        }

        printf("\n");

    }

    
}
