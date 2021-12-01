#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float he, hf, h;

      printf("Digite o número de horas extras trabalhadas: ");
        scanf("%f",&he);  
      printf("Digite o numero de horas que faltou no trabalho: ");
        scanf("%f",&hf);  

      h=(he-(2/3*(hf)))*60;

       if(h<600){
        printf("Irá receber R$100.00 de prêmio");
      }if(h>=600 && h<1200){
        printf("Irá receber R$200.00 de prêmio");
      }if(h>=1200 && h<1800){
        printf("Irá receber R$300.00 de prêmio");
      }if(h>=1800 && h<2400){
        printf("Irá receber R$400.00 de prêmio");
      }if(h>=2400){
        printf("Irá receber R$500.00 de prêmio");
      }
return 0; 
}
