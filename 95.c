#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
    int cod_estado,cod_carga;
    float imposto,peso_t,peso_kg,preco;

    printf("Digite o peso da carga em toneladas: ");
      scanf("%f",&peso_t);
    printf("Digite o codigo do estado de origem (1 a 5): ");
      scanf("%d",&cod_estado);
    printf("Digite o codigo da carga de origem (10 a 40): ");
      scanf("%d",&cod_carga);

    switch (cod_estado) {
        case 1:
        printf("ESTADO 1");
        printf("\nO peso da carga em quilos é %.2f kg",peso_kg = peso_t * 1000);
            if (cod_carga>=10 && cod_carga <= 20){
                printf("\nO preço da carga será de R$ %.2f ",preco = peso_kg * 100);
                printf("\nSerá cobrado R$ %.2f de impostos ",imposto = preco * 0.35);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.35);
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("\nO preço da carga será de R$ %.2f",preco = peso_kg * 250);
                printf("\nSerá cobrado R$ %.2f de impostos",imposto = preco * 0.35);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.35);
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("\nO preço da carga será de R$ %.2f",preco = peso_kg * 340);
                printf("\nSerá cobrado R$ %.2f de impostos",imposto = preco * 0.35);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.35);
             }

        break;

        case 2:
        printf("ESTADO 2");
        printf("\nO peso da carga em quilos é %.2f kg",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("\nO preço da carga será de R$ %.2f",preco = peso_kg * 100);
                printf("\nSerá cobrado R$ %.2f de impostos",imposto = preco * 0.25);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.25);
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("\nO preço da carga será de R$ %.2f",preco = peso_kg * 250);
                printf("\nSerá cobrado R$ %.2f de impostos",imposto = preco * 0.35);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.25);
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("\nO preço da carga será de R$ %.2f \n",preco = peso_kg * 340);
                printf("\nSerá cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.25);
            }
        break;

        case 3:
        printf("ESTADO 3");
        printf("\nO peso da carga em quilos é %.2f kg",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("\nO preço da carga será de R$ %.2f",preco = peso_kg * 100);
                printf("\nSerá cobrado R$ %.2f de impostos",imposto = preco * 0.35);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.15);
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("\nO preço da carga será de R$ %.2f",preco = peso_kg * 250);
                printf("\nSerá cobrado R$ %.2f de impostos",imposto = preco * 0.15);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.15);
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("\nO preço da carga será de R$ %.2f",preco = peso_kg * 340);
                printf("\nSerá cobrado R$ %.2f de impostos",imposto = preco * 0.35);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.15);
            }
        break;

        case 4:
        printf("ESTADO 4");
        printf("\nO peso da carga em quilos é %.2f kg",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("\nO preço da carga será de R$ %.2f",preco = peso_kg * 100);
                printf("\nSerá cobrado R$ %.2f de impostos",imposto = preco * 0.055);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.05);
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("\nO preço da carga será de R$ %.2f \n",preco = peso_kg * 250);
                printf("\nSerá cobrado R$ %.2f de impostos \n",imposto = preco * 0.15);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.05);
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("\nO preço da carga será de R$ %.2f \n",preco = peso_kg * 340);
                printf("\nSerá cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("\nO valor total do transporte será de R$ %.2f.",imposto = preco *1.05);
            }
        break;

        case 5:
        printf("\nESTADO 5 ");
        printf("\nO peso da carga em quilos é %.2f kg",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("\nO preço da carga será de R$ %.2f",preco = peso_kg * 100);
                printf("\nNão será cobrado impostos.");
                printf("\nO valor total do transporte será de R$ %.2f.",preco);
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Não será cobrado impostos. \n");
                printf("    O valor total do transporte será de R$ %.2f.",preco);
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O preço da carga será de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Será cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte será de R$ %.2f.",imposto = preco *1.15);
            }
        break;
    }
}