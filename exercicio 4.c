#include <stdio.h>

struct Produto {
    char nome[50];
    float compra;
    float venda;
};

int main() {
    struct Produto p[50];
    int i, menor = 0;

    printf("Informe os produtos:\n");

    for(i = 0; i < 50; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Nome: ");
        scanf("%s", p[i].nome);
        printf("Preco de compra: ");
        scanf("%f", &p[i].compra);
        printf("Preco de venda: ");
        scanf("%f", &p[i].venda);

        if(p[i].compra < p[menor].compra) {
            menor = i;
        }
    }

    printf("\nProduto com menor preco de compra:\n");
    printf("Indice: %d\n", menor);
    printf("Nome: %s\n", p[menor].nome);
    printf("Preco de compra: %.2f\n", p[menor].compra);
    printf("Preco de venda: %.2f\n", p[menor].venda);

    return 0;
}
