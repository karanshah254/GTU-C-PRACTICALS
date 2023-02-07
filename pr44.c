// Write a function Exchange to interchange the values of two variables, say x and y. illustrate the use of this function in a calling function.



#include<stdio.h>
int swap(int x,int y);

int main()
{
    int x,y;

    x=50;
    y=80;

    printf("\nBefore Swapping Nos Are : %d & %d \n",x,y);

    swap(x,y);
}
int swap(int x,int y)
{
    int temp;

    temp=x;
    x=y;
    y=temp;

    printf("\nAfter Swapping Nos ARe : %d & %d \n",x,y);

}