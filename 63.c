#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float preco, novo_preco;


      printf("Digite o preço do produto R$: ");
        scanf("%f",&preco);   

      if(preco<50){
        novo_preco=preco+(preco*0.05);
         printf("\nO novo preço será R$%.2f",novo_preco);
      }else if(preco>=50 && preco<100){
        novo_preco=preco+(preco*0.10);
         printf("\nO novo preço será R$%.2f",novo_preco);
      }else if(preco>100){
        novo_preco=preco+(preco*0.15);
         printf("\nO novo preço será R$%.2f",novo_preco);
      }

      if(novo_preco<=80){
         printf("\nO produto está classificado como barato");
      }else if(novo_preco>80 && novo_preco<=120){
         printf("\nO produto está classificado como normal");
      }else if(novo_preco>120 && novo_preco<=200){
         printf("\nO produto está classificado como caro");
      }else if(novo_preco>200){
         printf("\nO produto está classificado como muito caro");
      }

return 0; 
}
