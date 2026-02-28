#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, m[4][4];
    int somaC = 0, multiplicacaoL = 1, somad = 0, somatotal = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            m[i][j] = rand() % 50;
        }
    }


    printf("A matriz é:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", m[i][j]);
            if(i == j) {
                somad += m[i][j];
            }
            somatotal += m[i][j];
        }
        printf("\n");

        somaC += m[i][0];
        if(i == 1) {
            multiplicacaoL = 1;
            for(j = 0; j < 4; j++) {
                multiplicacaoL *= m[i][j];
            }
        }
    }

    printf("\nA soma da primeira coluna eh %d\n", somaC);
    printf("A multiplicacao da segunda linha eh %d\n", multiplicacaoL);
    printf("A soma da diagonal principal eh %d\n", somad);
    printf("A soma total da matriz eh %d\n", somatotal);

    return 0;
}
