#include<stdio.h>

void teste(char *p){
    char aux, *inicio, *fim;
    int tam = 0;

    // CORREÇÃO: fim recebe o ponteiro p, não *p (que é o conteúdo)
    fim = p;

    // Calcula o tamanho da string
    while(*fim != '\0') {
        tam++;
        fim++;
    }

    // CORREÇÃO: inicio recebe p, não *p
    inicio = p;
    // CORREÇÃO: fim aponta para o último caractere válido
    fim = p + tam - 1;

    // Inverte a string
    while(inicio < fim) {
        aux = *inicio;
        *inicio = *fim;
        *fim = aux;

        inicio++;
        fim--;
    }

    // CORREÇÃO: imprime a string invertida (p), não aux (que é um char)
    printf("Palavra invertida: %s\n", p);
}

int main(){
    char palavra[40];

    printf("Informe uma palavra: ");
    scanf("%39s", palavra);  // CORREÇÃO: limite de 39 caracteres

    teste(palavra);
    return 0;
}
