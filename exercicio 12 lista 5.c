#include<stdio.h>

int main(){
    char palavra[40], aux, *inicio, *fim;
    int tam = 0;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    fim = palavra;
    while(*fim != '\0') {
        tam++;
        fim++;
    }

    inicio = palavra;
    fim = palavra + tam - 1;

    while(inicio < fim) {
        aux = *inicio;
        *inicio = *fim;
        *fim = aux;

        inicio++;
        fim--;
    }

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}
