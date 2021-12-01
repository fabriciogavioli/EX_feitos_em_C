#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese"); 
    float peso,altura;

    printf("Classificação de acordo com o peso e a altura");
    printf("\nDigite seu peso: ");
    scanf("%f",&peso);
    printf("Digite sua altura: ");
    scanf("%f",&altura);

    if (altura < 1.20) {
        if (peso<60) {
            printf("Sua classificação é A");
        }
        else if (peso >=60 && peso <=90) {
            printf("Sua classificação é D");
        }
        else if (peso >90) {
            printf("Sua classificação é G");
        }
    }

    else if (altura >= 1.20 && altura<=1.70) {
        if (peso<60) {
            printf("Sua classificação é B");
        }
        else if (peso >=60 && peso <=90) {
            printf("Sua classificação é E");
        }
        else if (peso >90) {
            printf("Sua classificação é H");
        }
    }

    else if (altura >= 1.70) {
        if (peso<60) {
            printf("Sua classificação é C");
        }
        else if (peso >=60 && peso <=90) {
            printf("Sua classificação é F");
        }
        else if (peso >90) {
            printf("Sua classificação é I");
        }
    }

return 0;
}