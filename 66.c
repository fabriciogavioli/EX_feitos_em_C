#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int cod;
    float valor;


      printf("Digite o valor do produto R$: ");
        scanf("%f",&valor);
      printf("Digite o c�digo: ");
        scanf("%d",&cod);             

      if(valor<30){
        printf("O Produto n�o ter� desconto!");
      }if(valor>=30 && valor<=100){
        printf("O valor do produto com desconto R$:%.2f",valor-(valor*0.1));
      }if(valor>100){
        printf("O valor do produto com desconto R$:%.2f",valor-(valor*0.15));
      }  


return 0; 
}
