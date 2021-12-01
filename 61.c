#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float salario;


      printf("Digite o seu salario: ");
        scanf("%f",&salario);   

      if(salario<300){
        printf("Seu aumento será R$%.2f E seu salário passará a ser R$:%.2f",salario*0.15, salario+(salario*0.15));
      }else if(salario>=300 && salario<600){
        printf("Seu aumento será R$%.2f E seu salário passará a ser R$:%.2f",salario*0.1, salario+(salario*0.1));
      }else if(salario>=600 && salario<900){
        printf("Seu aumento será R$%.2f E seu salário passará a ser R$:%.2f",salario*0.05, salario+(salario*0.05));
      }else if(salario>900){
        printf("Você não receberá aumento");
      }

return 0; 
}
