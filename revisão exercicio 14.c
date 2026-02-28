#include<stdio.h>

int main() {
    int i, j, v1[10], v2[10][10];

    printf("Informe o vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    // Preenche v2 com múltiplos de v1[i]
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            v2[i][j] = v1[i] * (j + 1);
        }
    }

    // Imprime a matriz
    printf("\nMatriz resultante:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d\t", v2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
