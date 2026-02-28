#include <stdio.h>
#include <stdlib.h>

// Função para ler um vetor
void lerVetor(float *vetor, int tamanho, char nome) {
    printf("\n=== Leitura do vetor %c ===\n", nome);
    for (int i = 0; i < tamanho; i++) {
        printf("%c[%d]: ", nome, i);
        scanf("%f", &vetor[i]);
    }
}

// Função para exibir um vetor
void exibirVetor(float *vetor, int tamanho, char nome) {
    printf("\nVetor %c = [", nome);
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

// Função para calcular o produto escalar de dois vetores
float produtoEscalar(float *A, float *B, int n) {
    float resultado = 0.0;
    for (int i = 0; i < n; i++) {
        resultado += A[i] * B[i];
    }
    return resultado;
}

// Função para multiplicar um vetor por um escalar
void multiplicarVetorPorEscalar(float *vetor, float escalar, int n, float *resultado) {
    for (int i = 0; i < n; i++) {
        resultado[i] = escalar * vetor[i];
    }
}

// Função principal que executa o algoritmo especificado
void executarAlgoritmo(float *A, float *B, float *alpha, int n) {
    float temp[n]; // Vetor temporário

    printf("\n=== ETAPA 1: α = A ⊗ B ===\n");
    *alpha = produtoEscalar(A, B, n);
    printf("Novo valor de α = %.2f\n", *alpha);

    printf("\n=== ETAPA 2: A = αB ===\n");
    multiplicarVetorPorEscalar(B, *alpha, n, temp);
    // Copiar o resultado para A
    for (int i = 0; i < n; i++) {
        A[i] = temp[i];
    }
    exibirVetor(A, n, 'A');

    printf("\n=== ETAPA 3: α = A ⊗ A ===\n");
    *alpha = produtoEscalar(A, A, n);
    printf("Novo valor de α = %.2f\n", *alpha);

    printf("\n=== ETAPA 4: B = αA ===\n");
    multiplicarVetorPorEscalar(A, *alpha, n, B);
    exibirVetor(B, n, 'B');
}

int main() {
    int n; // Tamanho dos vetores
    float alpha; // Escalar
    float *A, *B; // Vetores

    printf("=== ALGORITMO DE OPERACOES COM VETORES ===\n");

    // Solicitar tamanho dos vetores
    printf("\nInforme o tamanho dos vetores A e B: ");
    scanf("%d", &n);

    // Verificar se o tamanho é válido
    if (n <= 0) {
        printf("Erro: O tamanho deve ser maior que zero.\n");
        return 1;
    }

    // Alocar memória para os vetores
    A = (float*)malloc(n * sizeof(float));
    B = (float*)malloc(n * sizeof(float));

    if (A == NULL || B == NULL) {
        printf("Erro: Falha na alocacao de memoria.\n");
        return 1;
    }

    // Ler valores iniciais
    printf("\nInforme o valor inicial de α (escalar): ");
    scanf("%f", &alpha);

    lerVetor(A, n, 'A');
    lerVetor(B, n, 'B');

    // Exibir valores iniciais
    printf("\n=== VALORES INICIAIS ===");
    printf("\nα = %.2f", alpha);
    exibirVetor(A, n, 'A');
    exibirVetor(B, n, 'B');

    // Executar o algoritmo
    executarAlgoritmo(A, B, &alpha, n);

    // Exibir resultados finais
    printf("\n=== RESULTADOS FINAIS ===");
    printf("\nα final = %.2f", alpha);
    exibirVetor(A, n, 'A');
    exibirVetor(B, n, 'B');

    // Liberar memória
    free(A);
    free(B);

    printf("\n=== FIM DO PROGRAMA ===\n");

    return 0;
}
