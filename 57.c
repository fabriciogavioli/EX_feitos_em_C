#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float salario;


      printf("Digite o seu salário: ");
        scanf("%f",&salario); 

      if(salario<500){
        printf("Você tem direito ao aumento, seu salário passará a ser R$:%.2f",salario+(salario*0.3));
      }else{
        printf("Você não tem direito ao aumento.");
      }
return 0; 
}
