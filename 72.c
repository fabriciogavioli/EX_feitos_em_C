#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int idade;
    float peso;

      printf("Digite a sua idade: ");
        scanf("%d",&idade);  
      printf("Digite o seu peso(kg): ");
        scanf("%f",&peso);  

       if(idade<20 && peso<60){
        printf("grupo de risco:9");
      }if(idade<20 && peso>=60 && peso<=90){
        printf("grupo de risco:8");
      }if(idade<20 && peso>90){
        printf("grupo de risco:7");
      }if(idade>=20 && idade<=50 && peso<60){
        printf("grupo de risco:6");
      }if(idade>=20 && idade<=50 && peso>=60 && peso<=90){
        printf("grupo de risco:5");
      }if(idade>=20 && idade<=50 && peso>90){
        printf("grupo de risco:4");
      }if(idade>50 && peso<60){
        printf("grupo de risco:3");
      }if(idade>50 && peso>=60 && peso<=90){
        printf("grupo de risco:2");
      }if(idade>50 && peso>90){
        printf("grupo de risco:1");
      }

return 0; 
}
