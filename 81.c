#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  int n1;
   
    printf("Digite um número para saber se é impar ou par: ");
      scanf("%d",&n1);

      if (n1%2 == 0){  
        printf("O número é par!");
    } else {  
      printf("O número é impar!");
    } 
  return 0;
}