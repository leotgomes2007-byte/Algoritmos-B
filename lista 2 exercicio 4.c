#include <stdio.h>

void vertical(int tam, char p[]) {
    for(int j = 0; j < tam; j++) {
        printf("%c\n", p[j]);
    }
}

int main() {
    int tam = 0;
    char palavra[50];

    printf("Informe a palavra desejada: ");
    scanf("%s", palavra);

    // Calcula o tamanho da palavra
    while (palavra[tam] != '\0') {
        tam++;
    }

    vertical(tam, palavra);

    return 0;
}
