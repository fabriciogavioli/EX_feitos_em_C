#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int i;
    float aplicado;


      printf("Qual investimento voc� deseja insvestir?\n1.para poupan�a (3 por cento ao m�s)\n2.para fundo de renda fixa (4 por cento ao m�s)\n");
        scanf("%d",&i);   
      printf("quanto deseja aplicar R$: ");
        scanf("%f",&aplicado);  

      if(i==1){
        printf("Ap�s um m�s voc� ter� R$:%.2f",aplicado+(aplicado*0.03));
      }if (i==2){
        printf("Ap�s um m�s voc� ter� R$:%.2f",aplicado+(aplicado*0.04));
      }if(i!=1 && i!=2){
        printf("comando inv�lido!");
      }  


return 0; 
}
