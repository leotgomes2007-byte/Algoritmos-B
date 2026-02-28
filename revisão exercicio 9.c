#include <stdio.h>

#define SIZE 10

int main() {
    int matriz[SIZE][SIZE];
    int valores[SIZE];
    int i, j, k;
    int encontrado;

    // Preenche a matriz com valores (pode modificar para entrada do usuário)
    printf("Matriz 10x10:\n");
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            matriz[i][j] = i * 10 + j;  // Padrão simples para teste
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Lê os 10 valores a serem buscados
    printf("\nDigite 10 valores para buscar na matriz:\n");
    for(k = 0; k < SIZE; k++) {
        printf("Valor %d: ", k+1);
        scanf("%d", &valores[k]);
    }

    // Verifica cada valor na matriz
    printf("\nResultados:\n");
    for(k = 0; k < SIZE; k++) {
        encontrado = 0;

        // Procura o valor na matriz
        for(i = 0; i < SIZE; i++) {
            for(j = 0; j < SIZE; j++) {
                if(matriz[i][j] == valores[k]) {
                    printf("Valor %d encontrado na posicao [%d][%d]\n",
                           valores[k], i, j);
                    encontrado = 1;
                    i = SIZE; // Sai dos dois loops
                    break;
                }
            }
        }

        if(!encontrado) {
            printf("Valor %d nao encontrado na matriz\n", valores[k]);
        }
    }

    return 0;
}
