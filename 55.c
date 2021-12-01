#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float n1, n2;
    int i;

      printf("\nDigite 1 para média entre os números\n2 diferença do maior para o menor\n3 produto entre os números\n4 divisão do primeiro pelo segundo\n: ");
        scanf("%d",&i); 
      printf("Digite o primeiro número: ");
        scanf("%f",&n1);  
      printf("Digite o segundo número: ");
        scanf("%f",&n2);          

      switch (i){   
      case 1:
        printf("A média entre os números é %.1f",(n1+n2)/2);
        break;
      
      case 2:

       if(n1>n2){
        printf("A difença do maior para o menor é %.1f",n1-n2);
       }else{ 
        printf("A difença do maior para o menor é %.1f",n2-n1);  
      }
       break;

      case 3:

        printf("O produto entre os números é %.1f",n1*n2);
        break;

      case 4:

      printf("A divisão do primeiro pelo segundo é %.1f",n1/n2);
      break;
      }


return 0; 
}
