#include <stdio.h>

int teste(char letra) {
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
       letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char letra;
    int vogal;

    printf("Informe uma letra: ");
    scanf("%c", &letra);

    vogal = teste(letra);

    if(vogal == 1) {
        printf("A letra informada eh vogal");
    } else {
        printf("A letra informada nao eh vogal");
    }

    return 0;
}
