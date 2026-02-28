#include<stdio.h>

void teste(char *p, char l){
    int i, contar = 0;

    printf("Informe uma palavra: ");
    scanf("%s", p);

    printf("Informe uma letra: ");
    scanf(" %c", &l);

    for(i = 0; p[i] != '\0'; i++){
        if(p[i] == l)
            contar++;
    }
    printf("A letra foi encontrada %d vezes na palavra informada", contar);
}

int main(){
    char palavra[40], letra;

    teste(palavra, letra);
    return 0;
}
