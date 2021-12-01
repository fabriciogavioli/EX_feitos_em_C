#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese"); 
    int cod_produto,cod_pais;
    float peso,gramas,preco,imposto;


    printf("Digite o codigo do produto comprado (1 a 10): ");
    scanf("%d",&cod_produto);
    printf("Digite o peso do produto(em KG): ");
    scanf("%f",&peso);
    printf("Digite o codigo do país de origem (1 a 3): ");
    scanf("%d",&cod_pais);

    if ((cod_pais == 1) && (cod_produto>=1 && cod_produto<=4)) {

            gramas = peso * 1000;
            preco = gramas / 10;

            printf("\nO peso %.2f em gramas é %.2fg ",peso,gramas);
            printf("\nO preço total do produto é R$ %.2f ",preco);
            printf("\nNão será cobrado impostos.");
    }

    else if ((cod_pais == 2) && (cod_produto>=5 && cod_produto<=7)) {

            gramas = peso * 1000;
            preco = gramas / 25;
            imposto = preco * 0.15;

            printf("\nO peso %.2f em gramas é %.2f g",peso,gramas);
            printf("\nO preço total do produto é R$ %.2f",preco);
            printf("\nImpostos: R$ %.2f,",imposto);
    }

      else if ((cod_pais == 3) && (cod_produto>=8 && cod_produto<=10)) {

            gramas = peso * 1000;
            preco = gramas / 35;
            imposto = preco * 0.25;

            printf("\nO peso %.2f em gramas é %.2f g ",peso,gramas);
            printf("\nO preço total do produto é R$ %.2f ",preco);
            printf("\nImpostos: R$ %.2f",imposto);
    }

    else {
        printf("COMANDO INVÁLIDO.");
    }

}