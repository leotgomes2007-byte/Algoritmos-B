#include <stdio.h>

struct VendeTudo {
    char nome[50];
    char cidade[50];
    float compras;
    int mes;
};

int main() {
    int i;
    struct VendeTudo v[5];

    printf("Informe os dados dos clientes:\n");

    for(i = 0; i < 5; i++) {
        printf("\nCliente %d:\n", i+1);
        printf("Nome do cliente: ");
        scanf("%49s", v[i].nome);

        printf("Cidade onde o cliente mora: ");
        scanf("%49s", v[i].cidade);

        printf("Valor total de compras: ");
        scanf("%f", &v[i].compras);

        printf("Mes da ultima compra (1-12): ");
        scanf("%d", &v[i].mes);
    }

    printf("\n\nDados dos clientes:\n");
    printf("================================================================================\n");

    for(i = 0; i < 5; i++) {
        printf("Cliente %d:\n", i+1);
        printf("Nome: %s\n", v[i].nome);
        printf("Cidade: %s\n", v[i].cidade);
        printf("Total de compras: R$ %.2f\n", v[i].compras);
        printf("Mes da ultima compra: %d\n\n", v[i].mes);
        printf("================================================================================\n");
    }

    return 0;
}
