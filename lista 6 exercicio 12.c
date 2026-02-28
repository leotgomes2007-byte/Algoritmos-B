#include<stdio.h>

struct carro{
    char placa[7];
    char nome[40];
    int telefone;
    float valor;
    int situacao;
};

void pagamento(int *s){
    int i;
    for(i = 0; i < 10; i++){
        if(*(s + i) == 0){
            printf("O pagamento do carro %d esta em aberto\n", i);
        } else if(*(s + i) == 1){
            printf("O carro %d foi pago\n", i);
        }
    }
}

void dados(struct carro *c){
    int i;
    for(i = 0; i < 10; i++){
        printf("\nDados do carro %d:\n", i);
        printf("Placa: %s\n", c[i].placa);
        printf("Nome: %s\n", c[i].nome);
        printf("Telefone: %d\n", c[i].telefone);
        printf("Valor: %.2f\n", c[i].valor);
        printf("Situacao: %d\n", c[i].situacao);
    }
}

void recebido(int *s, float *p){
    int i;
    float total = 0;
    for(i = 0; i < 10; i++){
        if(*(s + i) == 1){
            total += *(p + i);
        }
    }
    printf("O valor total recebido eh: %.2f\n", total);
}

int main(){
    struct carro c[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("Informe a placa do veiculo %d:", i);
        scanf("%s", c[i].placa);
        printf("Informe o nome do proprietario do veiculo %d:", i);
        scanf("%s", c[i].nome);
        printf("Informe o numero do dono do veiculo %d:", i);
        scanf("%d", &c[i].telefone);
        printf("Informe o valor a ser pago do veiculo %d:", i);
        scanf("%f", &c[i].valor);
        printf("Informe a situacao do pagamento do veiculo %d (1 = pago / 0 = pendente):", i);
        scanf("%d", &c[i].situacao);
    }

    pagamento(c[0].situacao);
    dados(c);
    recebido(c[0].situacao, c[0].valor);

    return 0;
}
