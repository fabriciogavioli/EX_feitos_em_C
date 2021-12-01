#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"Portuguese");

    float v_ingresso, lucro;
    int i, q_ingresso;

    v_ingresso=5.50;
    q_ingresso=120;
    lucro = q_ingresso * v_ingresso - 200;

    for (i = 1; i <= 9; i++) {

        v_ingresso = v_ingresso - 0.5;
        q_ingresso = q_ingresso + 26;
        printf("\nVALOR INGRESSO: R$ %.2f", v_ingresso);
        lucro = q_ingresso * v_ingresso - 200;
        printf("\nLucro: R$ %.2f", lucro); 
    }
    return 0;
}