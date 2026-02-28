#include <stdio.h>

int Cmenor(int valor, int men) {
    if (valor < men) {
        men = valor;
    }
    return men;
}

int Cmaior(int valor, int mai) {
    if (valor > mai) {
        mai = valor;
    }
    return mai;
}

int main() {
    int i, j, m[10][10], menor = 9999, maior[10];

    printf("Informe a matriz 10x10:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            menor = Cmenor(m[i][j], menor);
        }
    }

    for(i = 0; i < 10; i++) {
        maior[i] = m[i][0];
        for(j = 1; j < 10; j++) {
            maior[i] = Cmaior(m[i][j], maior[i]);
        }
    }

    printf("O menor numero da matriz eh %d\n", menor);
    for(i = 0; i < 10; i++) {
        printf("O maior numero da linha %d eh %d\n", i, maior[i]);
    }

    return 0;
}
