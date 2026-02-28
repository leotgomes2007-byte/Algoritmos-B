#include<stdio.h>
#include<stdlib.h>


void lerVetor(int *v, int L) {
    int i;
    for (i = 0; i < L; i++) {
        printf("vetor[%d]:", i);
        scanf("%d", &v[i]);
    }
}

int *alocarVetor(int L) {
    int *m;

    m = (int *)malloc(L * sizeof(int));
    if (!m) {
        printf("Erro na alocação!");
        exit(-1);
    }
    return m;
}

void novoVetor(int *v1, int *v2, int *v3, int L) {
    int i;

    for (i = 0; i < L; i++) {
        v3[i] = v1[i] + v2[i];
    }
}

void imprimirVetor(int *v, int L) {
    int i;
    printf("\nVetor Resultado (V3):\n");
    for (i = 0; i < L; i++) {
        printf("V3[%d] = %d\n", i, v[i]);
    }
}


int main() {
    int *v1, *v2, *v3, L;

    printf("Informe o tamanho (numero de linhas) dos vetores:");
    scanf("%d", &L);

    // Alocação dos vetores
    v1 = alocarVetor(L);
    v2 = alocarVetor(L);
    v3 = alocarVetor(L);

    // Leitura dos vetores
    printf("\n--- Informe o Vetor V1 ---\n");
    lerVetor(v1, L);

    printf("\n--- Informe o Vetor V2 ---\n");
    lerVetor(v2, L);

    // Cálculo da Soma V3 = V1 + V2
    novoVetor(v1, v2, v3, L);

    // Impressão do resultado
    imprimirVetor(v3, L);

    // Liberação de memória (Essencial!)
    free(v1);
    free(v2);
    free(v3);

    return 0;
}
