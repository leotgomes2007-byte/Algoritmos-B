#include <stdio.h>
#include <stdlib.h>

int *alocaMatriz(int l, int c) {
    int *m;

    m = (int *)malloc(l * c * sizeof(int));

    if (!m) {
        printf("ERRO na alocação!!!\n");
        exit(1);
    }
    return m;
}

void lerMatriz(int *m, int l, int c) {
    int i, j, k;
    printf("\nInforme a matriz:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            k = i * c + j;
            printf("m[%d][%d]: ", i, j);
            scanf("%d", (m + k));
        }
    }
}

int somaMatriz(int *m, int l, int c) {
    int i, j, k, soma = 0;

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            k = i * c + j;
            soma += *(m + k);
        }
    }
    return soma;
}

int main() {
    int *a, c, l, soma;

    printf("Informe o numero de linhas: ");
    scanf("%d", &l);

    printf("Informe o numero de colunas: ");
    scanf("%d", &c);

    a = alocaMatriz(l, c);

    lerMatriz(a, l, c);

    soma = somaMatriz(a, l, c);

    printf("\nA soma escalar da matriz informada deu %d\n", soma);

    free(a);

    return 0;
}
