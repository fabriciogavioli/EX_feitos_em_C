#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, j, k;
    int aux, numeros[4];

    i = 0;

    for (i = 1; i <= 5; i++) {
        printf("\nGRUPO %d ", i);


        for (j = 0; j < 4; j++) { 
            printf("\nDigite 4 números: ");
            scanf("%d", &numeros[j]);
        }

        printf("\nOrdem atual dos valores: ");
        for (j = 0; j < 4; j++){
            printf("| %d | ", numeros[j]);
        }
        printf("\n");

        
        for (j = 0; j < 4; j++) { 
            for (k = j + 1; k < 4; k++) {
                if(numeros[j]>numeros[k]){
                    aux = numeros[j];
                    numeros[j] = numeros[k];
                    numeros[k] = aux;
                }
            }
        }
        
        printf("\nNúmeros em ordem crescente");
        for (j=0; j<4; j++) {
            printf(" %d  ",numeros[j]);
        }


        for (j = 0; j < 4; j++) {
            for (k = j + 1; k < 4; k++) {
                if(numeros[j]<numeros[k]){
                    aux = numeros[j];
                    numeros[j] = numeros[k];
                    numeros[k] = aux;
                }
            }
        }

        printf("\nNúmeros em ordem decrescente");
        for (j=0; j<4; j++) {
            printf(" %d  ",numeros[j]);
        }


        return 0;
    }
}