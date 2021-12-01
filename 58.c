#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float salario;


      printf("Digite o seu salário: ");
        scanf("%f",&salario); 

      if(salario<300){
        printf("Seu salário passará a ser R$:%.2f",salario+(salario*0.35));
      }else{
        printf("Seu salário passará a ser R$:%.2f",salario+(salario*0.15));
      }
return 0; 
}
