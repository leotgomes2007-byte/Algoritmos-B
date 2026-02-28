#include<stdio.h>
#include<string.h>

int teste(char *p){
    int i, tam = 0, eh_palindromo = 1;
    char inverso[20];

    // Calcular o tamanho da string
    for(i = 0; p[i] != '\0'; i++){
        tam++;
    }

    // Criar string inversa
    for(i = tam - 1; i >= 0; i--){
        inverso[tam - 1 - i] = p[i];
    }
    inverso[tam] = '\0';

    // Comparar string original com a inversa
    for(i = 0; i < tam; i++){
        if(inverso[i] != p[i]){
            eh_palindromo = 0;
            break;
        }
    }

    return eh_palindromo;
}

int main(){
    char palavra[20];
    int palindromo;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    palindromo = teste(palavra);

    if(palindromo == 1) {
        printf("'%s' eh um palindromo!\n", palavra);
    } else {
        printf("'%s' NAO eh um palindromo.\n", palavra);
    }

    return 0;
}
