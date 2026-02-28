#include <stdio.h>

int Cadicao(int n1, int n2) {
    return n1 + n2;
}

int Csubtracao(int n1, int n2) {
    return n1 - n2;
}

int Cmultiplicacao(int n1, int n2) {
    return n1 * n2;
}

float Cdivisao(int n1, int n2) {
    if (n2 == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
    return (float)n1 / n2;
}

int main() {
    int num1, num2;
    float resposta;
    char operador;

    printf("Informe um numero: ");
    scanf("%d", &num1);

    printf("Informe outro numero: ");
    scanf("%d", &num2);

    printf("Informe um operador (+, -, *, /): ");
    scanf("%c", &operador);

    if (operador == '+') {
        resposta = Cadicao(num1, num2);
        printf("Resultado: %d + %d = %.2f\n", num1, num2, resposta);
    } else if (operador == '-') {
        resposta = Csubtracao(num1, num2);
        printf("Resultado: %d - %d = %.2f\n", num1, num2, resposta);
    } else if (operador == '*') {
        resposta = Cmultiplicacao(num1, num2);
        printf("Resultado: %d * %d = %.2f\n", num1, num2, resposta);
    } else if (operador == '/') {
        resposta = Cdivisao(num1, num2);
        printf("Resultado: %d / %d = %.2f\n", num1, num2, resposta);
    } else {
        printf("ERRO!!! Operador inválido\n");
    }

    return 0;
}
