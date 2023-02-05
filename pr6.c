#include <stdio.h>

int main() {
  
  int centigrade;

  float fahr;

  printf("\nEnter Centigrade Tempreture : \n");
  scanf("%d",&centigrade);

  fahr=(1.8*centigrade)+32;

  printf("\nFahrenheit Tempretute : %f",fahr);

}