#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() { 
  setlocale(LC_ALL, "portuguese");
    float n1, n2, media, media_turma;
    int i;
    int cont_aprovado, cont_exame, cont_rep;

    printf("Calculo de média de alunos \n\n");

    for (i = 1; i <= 6; i++) {
        printf("Aluno %d \n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        media = n1 + n2 / 2;
        media_turma = media_turma + media;

        if (media < 3) {
            printf("Você foi reprovado \n");
            cont_rep++;
        } else if (media >= 3 && media <= 7) {
            printf("Você está em exame.\n");
            cont_exame++;

        } else if (media > 7) {
            printf("Você foi aprovado.\n");
            cont_aprovado++;
        }
    }
    media_turma = media_turma / 6;

    printf("Total de alunos reprovados: %d \n", cont_rep);
    printf("Total de alunos em exame: %d \n", cont_exame);
    printf("Total de alunos aprovados: %d \n", cont_aprovado);
    printf("A média da turma é de %.2f pontos. \n", media_turma);

    return 0;
}