#include <stdio.h>
#include <stdlib.h>
#define MAX_PRODUTOS 100

struct papelaria {
    int codigo;
    char nome[30];
    char unidade[20];
    float custo;
    float venda;
    int estoque;
};

int main() {
    int i = 0, fim = 0, continuar = 1, menu = 0, codUsuario;
    int menorVendaIndex = 0, maiorVendaIndex = 0;
    float percentual;
    struct papelaria p[MAX_PRODUTOS];

    // Leitura de dados
    while (continuar == 1 && i < MAX_PRODUTOS) {
        printf("\nCadastro do produto %d:\n", i+1);

        printf("Codigo: ");
        scanf("%d", &p[i].codigo);

        printf("Nome do produto: ");
        scanf("%29s", p[i].nome);

        printf("Unidade do produto (ex: un, cx, kg): ");
        scanf("%19s", p[i].unidade);

        printf("Preco de custo: ");
        scanf("%f", &p[i].custo);

        printf("Quantidade em estoque: ");
        scanf("%d", &p[i].estoque);

        printf("\nDeseja cadastrar outro produto? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);

        i++;
        fim = i;
    }

    printf("\nInforme o percentual de lucro (ex: 0.5 para 50%%): ");
    scanf("%f", &percentual);

    // Calculo do valor de venda e identificação de maior/menor
    for(i = 0; i < fim; i++) {
        p[i].venda = p[i].custo + (p[i].custo * percentual);

        if(p[i].venda > p[maiorVendaIndex].venda) {
            maiorVendaIndex = i;
        }

        if(p[i].venda < p[menorVendaIndex].venda) {
            menorVendaIndex = i;
        }
    }

    // Menu de opções
    do {
        printf("\n==== MENU ====\n");
        printf("1- Listar todos os produtos\n");
        printf("2- Buscar produto por codigo\n");
        printf("3- Listar produtos com estoque zero\n");
        printf("4- Mostrar produto com maior valor de venda\n");
        printf("5- Mostrar produto com menor valor de venda\n");
        printf("0- Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        switch(menu) {
            case 1: // Listar todos os produtos
                printf("\n=== TODOS OS PRODUTOS ===\n");
                for(i = 0; i < fim; i++) {
                    printf("\nCodigo: %d\n", p[i].codigo);
                    printf("Nome: %s\n", p[i].nome);
                    printf("Unidade: %s\n", p[i].unidade);
                    printf("Preco custo: R$ %.2f\n", p[i].custo);
                    printf("Preco venda: R$ %.2f\n", p[i].venda);
                    printf("Estoque: %d %s\n", p[i].estoque, p[i].unidade);
                }
                break;

            case 2: // Buscar por código
                printf("\nInforme o codigo do produto: ");
                scanf("%d", &codUsuario);

                for(i = 0; i < fim; i++) {
                    if(codUsuario == p[i].codigo) {
                        printf("\nCodigo: %d\n", p[i].codigo);
                        printf("Nome: %s\n", p[i].nome);
                        printf("Unidade: %s\n", p[i].unidade);
                        printf("Preco custo: R$ %.2f\n", p[i].custo);
                        printf("Preco venda: R$ %.2f\n", p[i].venda);
                        printf("Estoque: %d %s\n", p[i].estoque, p[i].unidade);
                        break;
                    }
                }
                if(i == fim) {
                    printf("Produto nao encontrado!\n");
                }
                break;

            case 3: // Produtos com estoque zero
                printf("\n=== PRODUTOS COM ESTOQUE ZERO ===\n");
                for(i = 0; i < fim; i++) {
                    if(p[i].estoque == 0) {
                        printf("\nCodigo: %d\n", p[i].codigo);
                        printf("Nome: %s\n", p[i].nome);
                        printf("Unidade: %s\n", p[i].unidade);
                        printf("Preco venda: R$ %.2f\n", p[i].venda);
                    }
                }
                break;

            case 4: // Produto com maior valor de venda
                printf("\n=== PRODUTO COM MAIOR VALOR DE VENDA ===\n");
                printf("Codigo: %d\n", p[maiorVendaIndex].codigo);
                printf("Nome: %s\n", p[maiorVendaIndex].nome);
                printf("Unidade: %s\n", p[maiorVendaIndex].unidade);
                printf("Preco custo: R$ %.2f\n", p[maiorVendaIndex].custo);
                printf("Preco venda: R$ %.2f\n", p[maiorVendaIndex].venda);
                printf("Estoque: %d %s\n", p[maiorVendaIndex].estoque, p[maiorVendaIndex].unidade);
                break;

            case 5: // Produto com menor valor de venda
                printf("\n=== PRODUTO COM MENOR VALOR DE VENDA ===\n");
                printf("Codigo: %d\n", p[menorVendaIndex].codigo);
                printf("Nome: %s\n", p[menorVendaIndex].nome);
                printf("Unidade: %s\n", p[menorVendaIndex].unidade);
                printf("Preco custo: R$ %.2f\n", p[menorVendaIndex].custo);
                printf("Preco venda: R$ %.2f\n", p[menorVendaIndex].venda);
                printf("Estoque: %d %s\n", p[menorVendaIndex].estoque, p[menorVendaIndex].unidade);
                break;

            case 0:
                printf("Saindo do sistema...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(menu != 0);

    return 0;
}
