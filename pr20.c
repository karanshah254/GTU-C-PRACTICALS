// Write a program to find out sum of first and last digit of a given number.

#include <stdio.h>

int main()
{

  int no, sum = 0;

  printf("\n Enter Any Number :");
  scanf("%d", &no);

  if (no < 10)
  {
    goto l1;
  }
  else
  {

    sum = sum + (no % 10);

    while (no > 9)
    {
      no = no / 10;
    }

    sum = sum + no;
  }
l1:

  printf("\n Sum of First  & Last Digit == : %d", sum);
}