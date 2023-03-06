/*

5 5 5 5 5 
4 4 4 4
3 3 3 
2 2 
1

*/

#include<stdio.h>
int main()
{
    int i,j;
    int k=5;

    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf(" %d",k);
        }
        k--;
        printf("\n");
    }
    return 0;
}