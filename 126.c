#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
  
 float salario = 1000, aumento = 1.5/100;
	int i, anoIni = 2005, anofim;
    printf("Digite o ano: ");
      scanf("%d",&anofim);
	
	for (i = anoIni + 1; i < anofim; i++) {
		salario = salario + (salario * aumento);
		printf("Salario em %i: %.2f - aumento de %.1f%% \n", i, salario, aumento*100);
		aumento = 2 * aumento;
	}
	
	printf("Salario final: %.2f", salario);
	
	return 0;
}