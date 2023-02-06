/*

1.

AAAAA
AAAA
AAA
AA
A



*/

#include<stdio.h>
int main()
{
    int i,j,n;

    printf("\nEnter Rows : ");
    scanf("%d",&n);

    for(int i=n+1;i>1;i--)
    {
        for(int j=i;j>1;j--)
        {
            printf("A");
        }
        printf("\n");
    }
}