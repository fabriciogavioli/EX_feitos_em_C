#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    int cod, quantidade;
    float valor, preco_total;

      printf("Digite o c�digo do produto: ");
        scanf("%d",&cod);  
      printf("Digite a quantidade de produtos comprados: ");
        scanf("%d",&quantidade);  

       if(cod>=1 && cod<=10){
        valor=10;
      }if(cod>=11 && cod<=20){
        valor=15;
      }if(cod>=21 && cod<=30){
        valor=20;
      }if(cod>=31 && cod<=40){
        valor=30;
      }
        preco_total=valor*quantidade;

       if(preco_total<250){
        printf("\nPre�o unitario do produto R$:%.2f",valor);
        printf("\nPre�o total da compra R$:%.2f",preco_total);
        printf("\nO valor do desconto ser� R$:%.2f",preco_total*0.05);
        printf("\nO valor final ap�s o desconto � R$:%.2f",preco_total-(preco_total*0.05));

      }if(preco_total>=250 && preco_total<=500){
        printf("\nPre�o unitario do produto R$:%.2f",valor);
        printf("\nPre�o total da compra R$:%.2f",preco_total);
        printf("\nO valor do desconto ser� R$:%.2f",preco_total*0.1);
        printf("\nO valor final ap�s o desconto � R$:%.2f",preco_total-(preco_total*0.1));   

      }if(preco_total>500){
        printf("\nPre�o unitario do produto R$:%.2f",valor);
        printf("\nPre�o total da compra R$:%.2f",preco_total);
        printf("\nO valor do desconto ser� R$:%.2f",preco_total*0.15);
        printf("\nO valor final ap�s o desconto � R$:%.2f",preco_total-(preco_total*0.05));       
      }  
return 0; 
}
