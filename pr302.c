/*

2.

12345
1234
123
12
1

*/

#include<stdio.h>
int main()
{
    int i,j,n;
    int k=1;

    printf("\nEnter Number Of Rows : ");
    scanf("%d",&n);

    for(int i=n+1;i>1;i--)
    {
        for(int j=i;j>1;j--)
        {
            if(i>j)
            {
                printf("\t %d",k+1);
                k++;
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }
}