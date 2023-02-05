//Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday.

#include<stdio.h>
int main()
{
    int i;

    printf("\nEnter Number Between 1-7 : ");
    scanf("%d",&i);

    switch (i)
    {
    case 1 : printf("\nMonday");break; 
    case 2 : printf("\nTuesday");break;
    case 3 : printf("\nWednesday");break;
    case 4 : printf("\nThursday");break;
    case 5 : printf("\nFriday");break;
    case 6 : printf("\nSaturday");break;
    case 7 : printf("\nSunday");break;
    
    
    default: printf("\nEnter Valid Number Btw 1-7\n");
        
    }

}