#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese"); 
    int I;
    float A,B,C;

    printf("Digite um número entre 1, 2 e 3: ");
    scanf("%d",&I);


    printf("Digite três números diferentes. ");
    printf("\nDigite o primeiro número: ");
      scanf("%f",&A);
    printf("Digite o segundo número: ");
      scanf("%f",&B);
    printf("Digite o terceiro número: ");
      scanf("%f",&C);

    if (I == 1){
      if (A < B && B < C){
        printf("A ordem crescente dos números digitados é:%.0f,%.0f,%.0f",A,B,C);
     }if (A < C && C < B){
        printf("A ordem crescente dos números digitados é:%.0f,%.0f,%.0f",A,C,B);
     }if (B < A && A < C){
        printf("A ordem crescente dos números digitados é:%.0f,%.0f,%.0f",B,A,C);
     }if (B < C && C < A){
        printf("A ordem crescente dos números digitados é:%.0f,%.0f,%.0f",B,C,A);
     }if (C < A && A < B){
        printf("A ordem crescente dos números digitados é:%.0f,%.0f,%.0f",C,A,B);
     }if (C < B && B < A)
        printf("A ordem crescente dos números digitados é:%.0f,%.0f,%.0f",C,B,A);
     }      
     

    else if (I == 2 ){
      if (A > B && B > C){
        printf("A ordem descrescente dos números digitados é:%.0f,%.0f,%.0f",A,B,C);
     }if (A > C && C > B){
        printf("A ordem descrescente dos números digitados é:%.0f,%.0f,%.0f",A,C,B);
     }if (B > A && A > C){
        printf("A ordem descrescente dos números digitados é:%.0f,%.0f,%.0f",B,A,C);
     }if (B > C && C > A){
        printf("A ordem descrescente dos números digitados é:%.0f,%.0f,%.0f",B,C,A);
     }if (C > A && A > B){
        printf("A ordem descrescente dos números digitados é:%.0f,%.0f,%.0f",C,A,B);
     }if (C > B && B > A)
        printf("A ordem descrescente dos números digitados é:%.0f,%.0f,%.0f",C,B,A);
     }  
    

    else if (I == 3){
        if((A > B && A > C))
        {
            printf("O número maior está no meio: ");
            printf("%.0f - %.0f - %.0f ",B,A,C);
        }

        if((B > A && B > C))
        {
            printf("O número maior está no meio: ");
            printf("%.0f - %.0f - %.0f ",A,B,C);
        }

        if ((C > B && C > A))
        {
            printf("O número maior está no meio: ");
            printf("%.0f - %.0f - %.0f ",A,C,B);
        }
    }

    return 0;
}