//Write a C program to input an integer number and check the last digit of number is even or odd.

#include <stdio.h>

int main() 
{
  
  int a;
  
  printf("\n Enter any Number : ");
  scanf("%d",&a);
  
  if ((a%10)%2==0) 
  {
    printf("\n Last Digit of Number is Even");
  } 
  else 
  {
    printf("\n Last Digit of Number is Odd");
  }
  
}