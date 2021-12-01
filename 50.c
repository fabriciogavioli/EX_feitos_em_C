#include stdio.h
#include stdlib.h
#include locale.h


int main(void) {

  
    setlocale(LC_ALL, portuguese);

      float custo, convite;

    printf(Digite o custo do espetaculo );
      scanf(%f,&custo); 
    printf(Digite o valor do convite );
      scanf(%f,&convite);      

      printf(nO Minimo de convites para cobrir o custo do espetaculo é %.1f,custoconvite);
  
  return 0;
}