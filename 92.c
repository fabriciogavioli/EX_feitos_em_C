#include <stdio.h>
#include <locale.h> //Biblioteca locale é uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float l1,l2,l3,soma1,soma2,soma3;

    printf("Classificação de triãngulos \n\n");

    printf("digite o valor do primeiro lado: ");
    scanf("%f",&l1);
    printf("digite o valor do segundo lado: ");
    scanf("%f",&l2);
    printf("digite o valor do terceiro lado: ");
    scanf("%f",&l3);
    printf("\n\n");

    soma1 = l1 + l2;
    soma2 = l1+ l3;
    soma3 = l2+l3;

    if ((l1 < soma1  && l1<soma2 && l1<soma3) && (l2 <soma1 && l2<soma2 && l2<soma3) && (l3 <soma1 && l3<soma2 && l3<soma3 ))
    {
        if (l1==l2 && l1==l3 && l2==l3) {
            printf("Triângulo equilátero. \n\n");
        }
            else if (l1==l2 || l1==l3 || l2==l3) {
            printf("Triângulo isóceles. \n\n");
            }
                else if (l1!=l2 && l1!=l3 && l2!=l3) {
                printf("Triângulo esclaneo. \n\n");
                }
    }
    else {
        printf("Não é triângulo. \n\n");
    }

return 0;
}