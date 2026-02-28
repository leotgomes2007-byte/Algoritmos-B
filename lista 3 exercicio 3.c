#include <stdio.h>

// Função para encontrar a linha com o maior elemento
int encontrarLinhaMaior(int matriz[10][10]) {
    int maior = matriz[0][0];
    int linhaMaior = 0;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
            }
        }
    }
    return linhaMaior;
}

// Função para encontrar o menor elemento de uma linha
int encontrarMenorDaLinha(int matriz[10][10], int linha) {
    int menor = matriz[linha][0];

    for(int j = 1; j < 10; j++) {
        if(matriz[linha][j] < menor) {
            menor = matriz[linha][j];
        }
    }
    return menor;
}

int main() {
    int i, j, m[10][10];
    int linhaMaior, minimax;

    printf("Informe a matriz 10x10:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // Encontrar a linha que contém o maior elemento da matriz
    linhaMaior = encontrarLinhaMaior(m);

    // Encontrar o menor elemento dessa linha (minimax)
    minimax = encontrarMenorDaLinha(m, linhaMaior);

    printf("A linha que contem o maior elemento eh: %d\n", linhaMaior);
    printf("O minimax (menor elemento dessa linha) eh: %d\n", minimax);

    return 0;
}
