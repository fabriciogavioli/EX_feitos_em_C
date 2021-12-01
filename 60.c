#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float c_fabrica, c_distribuidor, c_impostos;


      printf("Digite o custo de fábrica do carro: ");
        scanf("%f",&c_fabrica);   

      if(c_fabrica<12000){
        printf("O valor do carro com impostos e lucro do distribuidor será R$:%.2f",c_fabrica+(c_fabrica*0.05));
      }else if(c_fabrica>=12000 && c_fabrica<=25000){
        printf("O valor do seu crédito será R$:%.2f",c_fabrica+(c_fabrica*0.15)+(c_fabrica*0.10));
      }else if(c_fabrica>25000){
        printf("O valor do seu crédito será R$:%.2f",c_fabrica+(c_fabrica*0.15)+(c_fabrica*0.20));
      }

return 0; 
}
