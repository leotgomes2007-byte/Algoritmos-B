#include <stdio.h>

int calculo(int valor, int n) {
    return valor * n;
}

int main() {
    int i, vetor[15], numero, novo[15];

    printf("Informe o vetor:\n");
    for(i = 0; i < 15; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Informe o numero que deseja multiplicar o vetor: ");
    scanf("%d", &numero);

    for(i = 0; i < 15; i++) {
        novo[i] = calculo(vetor[i], numero);
    }

    printf("Novo vetor:\n");
    for(i = 0; i < 15; i++) {
        printf("%d\t", novo[i]);
    }

    return 0;
}
