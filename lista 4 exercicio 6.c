#include <stdio.h>

int imprimirDecrescente(int n) {
    if (n <= 0) {
        return 0;  // Caso base
    }

    printf("%d ", n);
    return 1 + imprimirDecrescente(n - 1);
}

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Digite um numero positivo!\n");
        return 1;
    }

    printf("Numeros de %d ate 1: ", numero);
    int total = imprimirDecrescente(numero);
    printf("\nTotal de numeros impressos: %d\n", total);

    return 0;
}
