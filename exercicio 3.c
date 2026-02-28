#include <stdio.h>

struct turma {
    int faltas;
    float nota[3];
    float media;
};

int main() {
    int i;
    struct turma t[3];

    printf("Informe o numero de faltas de cada estudante em horas:\n");
    for (i = 0; i < 3; i++) {
        printf("Estudante %d: ", i);
        scanf("%d", &t[i].faltas);
    }

    printf("\nInforme as notas dos estudantes:\n");
    for (i = 0; i < 3; i++) {
        printf("Estudante %d:\n", i);
        for (int j = 0; j < 3; j++) {
            printf(" Nota %d: ", j + 1);
            scanf("%f", &t[i].nota[j]);
        }
    }

    // Cálculo da média
    for (i = 0; i < 3; i++) {
        t[i].media = (t[i].nota[0] + t[i].nota[1] + t[i].nota[2]) / 3.0;
    }

    printf("\nResultados:\n");
    for (i = 0; i < 3; i++) {
        if (t[i].faltas <= 20 && t[i].media >= 6.0) {
            printf("O aluno %d foi aprovado. Média: %.2f, Faltas: %d\n", i, t[i].media, t[i].faltas);
        } else {
            printf("O aluno %d foi reprovado. Média: %.2f, Faltas: %d\n", i, t[i].media, t[i].faltas);
        }
    }

    return 0;
}
