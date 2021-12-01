#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int cod;
    float preco;

      printf("Digite o preço do produto R$: ");
        scanf("%f",&preco);  
      printf("Digite o código de origem: ");
        scanf("%d",&cod);  

       if(cod==1){
        printf("procedência:sul");
      }if(cod==2){
        printf("procedência:norte");
      }if(cod==3){
        printf("procedência:leste");
      }if(cod==4){
        printf("procedência:oeste");
      }if(cod>=5 && cod<=6){
        printf("procedência:nordeste");
      }if(cod>=7 &&cod<=9){
        printf("procedência:sudeste");
      }if(cod>=10 && cod<=20){
        printf("procedência:centro-oeste");
      }if(cod>=21 && cod<=30){
        printf("procedência:nordeste");
      }if(cod<=0 && cod>30){
        printf("código inválido");
      }
