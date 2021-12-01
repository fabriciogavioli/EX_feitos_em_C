#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() { 
  setlocale(LC_ALL, "portuguese");

int num, div, i, j, ver_primo, cont_primo;
    ver_primo = 0;
    cont_primo = 0;

    for (i = 1; i <= 10; i++) {
        printf("%dº Número: ", i);
        scanf("%d", &num);

        for (j = 1; j <= 9; j++) {
            div = num % j;

            if (div == 0) {
                ver_primo++;
            }
        }

        if (ver_primo > 2) {
            printf("\n%d não é primo.", num);
        } else {
            printf("\n%d é primo.", num);
            cont_primo++;
        }
        ver_primo = 0; 
    }

    if (cont_primo > 0) {
        printf("\nForam digitados %d números primos.", cont_primo);
    } else {
        printf("\nNenhum número primo digitado.");
    }

    return 0;
}