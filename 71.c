#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int cod;
    float preco;

      printf("Digite o pre�o do produto R$: ");
        scanf("%f",&preco);  
      printf("Digite o c�digo de origem: ");
        scanf("%d",&cod);  

       if(cod==1){
        printf("proced�ncia:sul");
      }if(cod==2){
        printf("proced�ncia:norte");
      }if(cod==3){
        printf("proced�ncia:leste");
      }if(cod==4){
        printf("proced�ncia:oeste");
      }if(cod>=5 && cod<=6){
        printf("proced�ncia:nordeste");
      }if(cod>=7 &&cod<=9){
        printf("proced�ncia:sudeste");
      }if(cod>=10 && cod<=20){
        printf("proced�ncia:centro-oeste");
      }if(cod>=21 && cod<=30){
        printf("proced�ncia:nordeste");
      }if(cod<=0 && cod>30){
        printf("c�digo inv�lido");
      }
