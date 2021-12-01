#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int i;
    float aplicado;


      printf("Qual investimento você deseja insvestir?\n1.para poupança (3 por cento ao mês)\n2.para fundo de renda fixa (4 por cento ao mês)\n");
        scanf("%d",&i);   
      printf("quanto deseja aplicar R$: ");
        scanf("%f",&aplicado);  

      if(i==1){
        printf("Após um mês você terá R$:%.2f",aplicado+(aplicado*0.03));
      }if (i==2){
        printf("Após um mês você terá R$:%.2f",aplicado+(aplicado*0.04));
      }if(i!=1 && i!=2){
        printf("comando inválido!");
      }  


return 0; 
}
