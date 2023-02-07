// Write a program to read structure elements from keyboard.


#include <stdio.h>

struct Point
{
    int x, y;
};

int main(void)
{
    struct Point p;
    
    printf("Enter x and y coordinates of a point: ");
    scanf("%d %d", &p.x, &p.y);
    
    printf("You entered x = %d and y = %d\n", p.x, p.y);
    
    return 0;
}