#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float s;

      printf("Digite o saldo medio R$: ");
        scanf("%f",&s);  

       if(s<200){
        printf("Seu saldo medio é R$:%.2f",s);
        printf("\nPortanto seu crédito especial é R$:%.2f",s*0.1);
      }if(s>=200 && s<300){
        printf("Seu saldo medio é R$:%.2f",s);
        printf("\nPortanto seu crédito especial é R$:%.2f",s*0.2);
      }if(s>=300 && s<400){
        printf("Seu saldo medio é R$:%.2f",s);
        printf("\nPortanto seu crédito especial é R$:%.2f",s*0.25);
      }if(s>=400){
        printf("Seu saldo medio é R$:%.2f",s);
        printf("\nPortanto seu crédito especial é R$:%.2f",s*0.3);
      }
return 0; 
}
