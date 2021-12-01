#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float salario;


      printf("Digite o seu salario bruto: ");
        scanf("%f",&salario);   

      if(salario<350){
        printf("Você irá receber R$:%.2f",salario-(salario*0.07)+100);
      }else if(salario>=350 && salario<600){
        printf("Você irá receber R$:%.2f",salario-(salario*0.07)+75);
      }else if(salario>=600 && salario<900){
        printf("Você irá receber R$:%.2f",salario-(salario*0.07)+50);
      }else if(salario>900){
        printf("Você irá receber R$:%.2f",salario-(salario*0.07)+35);
      }

return 0; 
}
