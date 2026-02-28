#include <stdio.h>

float calculoDesconto(float valorTotal) {
    if (valorTotal >= 1000) {
        return valorTotal * 0.10;
    } else if (valorTotal >= 500) {
        return valorTotal * 0.08;
    } else if (valorTotal >= 100) {
        return valorTotal * 0.05;
    } else {
        return 0;
    }
}

int main() {
    float preco, desconto, quantidade, valorTotal, valorFinal;
    char unidade[20];

    printf("Informe o preço de um produto: ");
    scanf("%f", &preco);

    printf("Informe a unidade (kilo, litro, metro...): ");
    scanf("%s", unidade);

    printf("Informe a quantidade do produto vendida: ");
    scanf("%f", &quantidade);

    valorTotal = preco * quantidade;
    desconto = calculoDesconto(valorTotal);
    valorFinal = valorTotal - desconto;

    printf("\nDados do produto:\n");
    printf("Preço unitário: %.2f\n", preco);
    printf("Unidade: %s\n", unidade);
    printf("Quantidade vendida: %.2f\n", quantidade);
    printf("Valor total: %.2f\n", valorTotal);

    if (desconto == 0) {
        printf("Não houve desconto.\n");
    } else {
        printf("Desconto: %.2f\n", desconto);
    }

    printf("Valor a ser pago (final): %.2f\n", valorFinal);

    return 0;
}
