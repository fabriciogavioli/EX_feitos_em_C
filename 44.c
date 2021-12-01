#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void) {

  
    setlocale(LC_ALL, "portuguese");

      float alt, degrau;

    printf("Digite o tamanho da altura do degrau em metros: ");
      scanf("%f",&degrau); 
    printf("Digite a altura que deseja chegar: ");
      scanf("%f",&alt);     
      
      printf("Você deverá subir %.1f degrais",alt/degrau);
      
  
  return 0;
}