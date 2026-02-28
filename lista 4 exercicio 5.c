#include <stdio.h>

int imprimirCrescente(int n, int atual) {
    if (atual > n) {
        return 0;
    }

    printf("%d ", atual);
    return 1 + imprimirCrescente(n, atual + 1);
}

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Digite um numero positivo!\n");
        return 1;
    }

    printf("Numeros de 1 ate %d: ", numero);
    int total = imprimirCrescente(numero, 1);
    printf("\nTotal de numeros impressos: %d\n", total);

    return 0;
}
