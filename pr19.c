
// Write a program to generate first n number of Fibonacci series

// Fibonacci Sereis of first n number : 0 1 1 2 3 5 ......

#include <stdio.h>
int main()
{

   int n1 = 0, n2 = 1, n3, i, n;

   printf("Enter first n number of elements :");
   scanf("%d", &n);

   printf("\nFibonacci Sereis for first %d number are : ", n);

   

   printf("\n%d %d", n1, n2); // printing 0 and 1

   for (i = 2; i < n; ++i) // loop starts from 2 because 0 and 1 are already printed
   {
      n3 = n1 + n2;

      printf(" %d", n3);

      n1 = n2;

      n2 = n3;
   }
}
