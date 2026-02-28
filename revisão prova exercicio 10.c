#include<stdio.h>

void teste(char *p){
    int i, tam = 0;
    char temp;

    // Calcular o tamanho da string
    for(i = 0; p[i] != '\0'; i++){
        tam++;
    }

    // Inverter a string
    for(i = 0; i < tam/2; i++){
        temp = p[i];
        p[i] = p[tam - 1 - i];
        p[tam - 1 - i] = temp;
    }

    printf("Palavra invertida:\n");
    printf("%s", p);
}

int main(){
    char palavra[40];

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    teste(palavra);

    return 0;
}
