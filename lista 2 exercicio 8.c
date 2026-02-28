#include<stdio.h>

float calculo(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {
    float notas[3], media;

    printf("Informe as notas dos alunos:\n");
    for(int i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calculo(notas[0], notas[1], notas[2]);
    printf("A media do aluno foi: %.2f", media);

    return 0;
}
