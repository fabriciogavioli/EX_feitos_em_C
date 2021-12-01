#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  
  setlocale(LC_ALL, "portuguese");

  int numero; 

    
    printf("Digite o número que deseja saber a tabuada: ");
    scanf("%d",&numero);
    printf("A sequência da tabuada é :\n%d x 0 =%d\n%d x 1 =%d\n%d x 2 =%d\n%d x 3 =%d\n%d x 4 =%d\n%d x 5 =%d\n%d x 6 =%d\n%d x 7 =%d\n%d x 8 =%d\n%d x 9 =%d\n%d x 10 =%d\n", numero, numero*0, numero, numero*1, numero, numero*2, numero, numero*3, numero, numero*4, numero, numero*5, numero, numero*6, numero, numero*7, numero, numero*8, numero, numero*9, numero, numero*10);
    
    
  
  return 0;
}