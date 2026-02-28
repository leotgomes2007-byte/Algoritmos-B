#include <stdio.h>

int main() {
    int i, a[10], b[10], c[20];

    // Preencher vetor a com 0 a 9
    for(i = 0; i < 10; i++) {
        a[i] = i;
    }

    // Preencher vetor b com 10 a 19
    for(i = 0; i < 10; i++) {
        b[i] = i + 10;
    }

    // Intercalar vetores a e b no vetor c
    for(i = 0; i < 10; i++) {
        c[2*i] = a[i];       // posições pares
        c[2*i + 1] = b[i];   // posições ímpares
    }

    // Mostrar vetor c
    printf("Vetor intercalado c:\n");
    for(i = 0; i < 20; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
