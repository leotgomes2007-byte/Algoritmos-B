#include<stdio.h>

int intervalo(int n1, int n2) {
    int soma = 0;

    if(n1 < n2) {
        for(int i = n1 + 1; i < n2; i++) {
            soma += i;
        }
    } else if(n1 > n2) {
        for(int i = n2 + 1; i < n1; i++) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int numero1, numero2, s;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);

    s = intervalo(numero1, numero2);

    printf("A soma do intervalo entre %d e %d eh %d\n", numero1, numero2, s);

    return 0;
}
