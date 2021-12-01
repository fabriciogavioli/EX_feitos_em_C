#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");

 int quant, num;
    int i, j;
    int fat = 1;

    printf("Digite a quantidade de valores que devems ser lidos a seguir: ");
    scanf("%d", &quant);

    for (i = 1; i <= quant; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);

        for (j = 1; j <= num; j++) {
            fat = fat*j;
        }
        printf("Seu fatorial: %d \n\n", fat);
        fat = 1;
    }


    return 0;


}