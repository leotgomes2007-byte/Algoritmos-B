#include<stdio.h>
#define TAM 100

struct papelaria{
    int cod;
    char nome[30];
    char unidade[20];
    float custo;
    float venda;
    float estoque;
};

void listar_tudo(struct papelaria p[], int t){
    int i;
    printf("\n=== LISTA DE TODOS OS PRODUTOS ===\n");
    for(i = 0; i < t; i++){
        printf("\nProduto %d:\n", i+1);
        printf("Codigo: %d\n", p[i].cod);
        printf("Nome: %s\n", p[i].nome);
        printf("Unidade: %s\n", p[i].unidade);
        printf("Preco de custo: %.2f\n", p[i].custo);
        printf("Preco de venda: %.2f\n", p[i].venda);
        printf("Estoque: %.2f\n", p[i].estoque);
        printf("---------------------------\n");
    }
}

void listar_especifico(struct papelaria p[], int t){
    int i, codP;
    int encontrado = 0;

    printf("\nInforme o codigo do produto que deseja procurar: ");
    scanf("%d", &codP);

    for(i = 0; i < t; i++){
        if(codP == p[i].cod){
            printf("\n=== PRODUTO ENCONTRADO ===\n");
            printf("Codigo: %d\n", p[i].cod);
            printf("Nome: %s\n", p[i].nome);
            printf("Unidade: %s\n", p[i].unidade);
            printf("Preco de custo: %.2f\n", p[i].custo);
            printf("Preco de venda: %.2f\n", p[i].venda);
            printf("Estoque: %.2f\n", p[i].estoque);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado){
        printf("Produto com codigo %d nao encontrado!\n", codP);
    }
}

void listar_estoque(struct papelaria p[], int t){
    int i;
    int tem_estoque_zero = 0;

    printf("\n=== PRODUTOS COM ESTOQUE ZERO ===\n");
    for(i = 0; i < t; i++){
        if(p[i].estoque == 0){
            printf("\nProduto %d:\n", i+1);
            printf("Codigo: %d\n", p[i].cod);
            printf("Nome: %s\n", p[i].nome);
            printf("Unidade: %s\n", p[i].unidade);
            printf("Preco de custo: %.2f\n", p[i].custo);
            printf("Preco de venda: %.2f\n", p[i].venda);
            printf("Estoque: %.2f\n", p[i].estoque);
            printf("---------------------------\n");
            tem_estoque_zero = 1;
        }
    }
    if(!tem_estoque_zero){
        printf("Nenhum produto com estoque zero!\n");
    }
}

void listar_maior(struct papelaria p[], int t){
    int i;
    float maior = -1;
    int maiorI = -1;

    if(t == 0){
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    for(i = 0; i < t; i++){
        if(p[i].venda > maior){
            maior = p[i].venda;
            maiorI = i;
        }
    }

    printf("\n=== PRODUTO COM MAIOR VALOR DE VENDA ===\n");
    printf("Codigo: %d\n", p[maiorI].cod);
    printf("Nome: %s\n", p[maiorI].nome);
    printf("Unidade: %s\n", p[maiorI].unidade);
    printf("Preco de custo: %.2f\n", p[maiorI].custo);
    printf("Preco de venda: %.2f\n", p[maiorI].venda);
    printf("Estoque: %.2f\n", p[maiorI].estoque);
}

int main(){
    struct papelaria p[TAM];
    int i = 0, continuar, menu;
    int tam = 0;

    // Cadastro de produtos
    do{
        printf("\n=== CADASTRO DO PRODUTO %d ===\n", i+1);
        printf("Codigo: ");
        scanf("%d", &p[i].cod);
        printf("Nome: ");
        scanf("%s", p[i].nome);
        printf("Unidade: ");
        scanf("%s", p[i].unidade);
        printf("Preco de custo: ");
        scanf("%f", &p[i].custo);
        printf("Preco de venda: ");
        scanf("%f", &p[i].venda);
        printf("Estoque: ");
        scanf("%f", &p[i].estoque);

        printf("Deseja continuar cadastrando produtos? (sim = 1, nao = 0): ");
        scanf("%d", &continuar);

        tam++;
        i++;

        if(tam >= TAM){
            printf("Limite maximo de produtos atingido!\n");
            break;
        }
    } while(continuar == 1 && i < TAM);

    // Menu principal
    do{
        printf("\n===== MENU =====\n");
        printf("(1) Listar os dados de todos os produtos\n");
        printf("(2) Listar os dados de um produto por codigo\n");
        printf("(3) Listar produtos com estoque zero\n");
        printf("(4) Mostrar produto de maior valor de venda\n");
        printf("(5) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                listar_tudo(p, tam);
                break;
            case 2:
                listar_especifico(p, tam);
                break;
            case 3:
                listar_estoque(p, tam);
                break;
            case 4:
                listar_maior(p, tam);
                break;
            case 5:
                printf("Saindo!!!\n");
                break;
            default:
                printf("ERRO!!! Valor informado invalido\n");
                break;
        }
    } while(menu != 5);

    return 0;
}
