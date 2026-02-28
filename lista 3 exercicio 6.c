#include <stdio.h>

char palavra[50], letra;
int contar = 0, i;

void teste() {
    for (i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == letra) {
            contar++;
        }
    }
}

int main() {
    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    getchar();

    printf("Informe a letra que deseja procurar na palavra informada anteriormente: ");
    scanf("%c", &letra);

    teste();

    printf("A letra '%c' apareceu %d vezes na palavra informada.\n", letra, contar);

    return 0;
}

