#include<stdio.h>
#include<stdio.h>

int main(){
    char palavra[40], *inicio, *fim;
    int ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    fim = palavra;
    while(*fim != '\0') {
        fim++;
    }
    fim--;

    inicio = palavra;
    while(inicio < fim) {
        if(*inicio != *fim) {
            ehPalindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if(ehPalindromo) {
        printf("'%s' é um palíndromo!\n", palavra);
    } else {
        printf("'%s' NÃO é um palíndromo.\n", palavra);
    }

    return 0;
}
