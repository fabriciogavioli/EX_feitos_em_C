#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float n1, n2;
    int i;

      printf("\nDigite 1 para o primeiro número elevado ao segundo\n2 para a raiz quadrada dos dois números\n3 para a raiz cúbica dos dois números\n: ");
        scanf("%d",&i); 
      printf("Digite o primeiro número: ");
        scanf("%f",&n1);  
      printf("Digite o segundo número: ");
        scanf("%f",&n2);          

      switch (i){   
      case 1:
        printf("A o resultado é %.1f",pow(n1,n2));
        break;
      
      case 2:

        printf("A raiz quadrada do primeiro número é %.1f",sqrt(n1));
        printf("\nA raiz quadrada do segundo número é %.1f",sqrt(n2));
       break;

      case 3:

        printf("A raiz cúbica do primeiro número é %.1f",cbrt(n1));
        printf("\nA raiz cúbica do segundo número é %.1f",cbrt(n2));
        break;

      }

return 0; 
}
