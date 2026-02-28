#include<stdio.h>
#include<stdlib.h>

int *alocaVetor(int tam) {
    int *v;
    v = (int*)malloc(tam * sizeof(int));
    if(!v) {
        printf("Erro na alocação dinamica do vetor!!");
        exit(-1);
    }
    return v;
}

int *alocaMatriz(int c, int l) {
    int *m;
    m = (int*)malloc(l * c * sizeof(int));
    if(!m) {
        printf("Erro na alocação dinamica da matriz!!");
        exit(-1);
    }
    return m;
}

void multiplicaMatrizVetor(int *m, int *v, int l, int c, int *resultado) {
    int i, j, k;

    for(i = 0; i < l; i++) {
        resultado[i] = 0;

        for(j = 0; j < c; j++) {
            k = i * c + j;

            resultado[i] += m[k] * v[j];
        }
    }
}

void imprimeVetor(int *v, int tam, char nome) {
    int i;
    printf("\nVetor %c (Resultado):\n", nome);
    for(i = 0; i < tam; i++) {
        printf("%c[%d] = %d\n", nome, i, v[i]);
    }
}

// Função principal
int main() {
    int *v, *m, *c_res;
    int tam, c, l;
    int i, j;

    printf("Informe o numero de linhas da matriz (l): ");
    scanf("%d",&l);

    printf("Informe o numero de colunas da matriz (c) / tamanho do vetor B (tam): ");

    scanf("%d",&c);
    tam = c;

    printf("\n--- ALOCAÇÃO DE MEMÓRIA ---\n");
    m = alocaMatriz(c, l);
    v = alocaVetor(tam);
    c_res = alocaVetor(l);

    printf("\n--- LEITURA DOS DADOS ---\n");

    // Leitura do Vetor B
    for(i = 0; i < tam; i++) {
        printf("Vetor B[%d]: ", i);
        scanf("%d",&v[i]);
    }

    // Leitura da Matriz
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("Matriz A[%d][%d]: ", i, j);
            scanf("%d", (m + i * c + j));
        }
    }

    // Multiplicação
    multiplicaMatrizVetor(m, v, l, c, c_res);

    // Imprime o resultado
    imprimeVetor(c_res, l, 'C');

    // Liberação de memória
    free(v);
    free(m);
    free(c_res);

    return 0;
}
