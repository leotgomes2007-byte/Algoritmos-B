#include <stdio.h>

int calculo(int v, int l) {
    return v * (l + 1);
}

int main() {
    int i, j, m[6][6];

    printf("Informe a primeira linha da matriz:\n");
    for(i = 0; i < 6; i++) {
        printf("m[0][%d]: ", i);
        scanf("%d", &m[0][i]);
    }

    for(i = 1; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            m[i][j] = calculo(m[0][j], i);
        }
    }

    // Exibe a matriz
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
