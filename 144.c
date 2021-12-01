#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
    int m, n, i;
    int soma;

    do {
        printf("Digite M: ");
        scanf("%d", &m);
        printf("Digite N: ");
        scanf("%d", &n);

        for (i = m; i <= n; i++) {
            soma = soma + i;
        }

        printf("A soma dos números entre %d e %d é: %d. \n", m, n, m+n);
        soma = 0;
        
    } while (m < n);

    return 0;
}