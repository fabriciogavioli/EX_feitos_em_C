#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float salario;


      printf("Digite o seu salario: ");
        scanf("%f",&salario);   

      if(salario<300){
        printf("Seu salário passará a ser R$:%.2f",salario+(salario/2));
      }else if(salario>=300 && salario<500){
        printf("Seu salário passará a ser R$:%.2f",salario+(salario*0.4));
      }else if(salario>=500 && salario<700){
        printf("Seu salário passará a ser R$:%.2f",salario+(salario*0.3));
      }else if(salario>=700 && salario<800){
        printf("Seu salário passará a ser R$:%.2f",salario+(salario*0.2));
      }else if(salario>=800 && salario<1000){
        printf("Seu salário passará a ser R$:%.2f",salario+(salario*0.1));
      }else if(salario>=1000){
        printf("Seu salário passará a ser R$:%.2f",salario+(salario*0.05));
      }

return 0; 
}
