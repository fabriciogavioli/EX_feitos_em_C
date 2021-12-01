#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {
  int n;
    printf("Digite  o número de lados de um polígono convexo: ");
     scanf("%d",&n);
    printf("O número de diagonais desse polígono:%d",n*(n-3)/2);

  
  return 0;
}