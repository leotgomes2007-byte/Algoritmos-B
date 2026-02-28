#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, v[50], codigo;

    for(i = 0; i < 50; i++) {
        v[i] = rand() % 50;
    }

    for(i = 0; i < 50; i++) {
        printf("%d\n\t", v[i]);
    }

    printf("Informe o codigo (0 = terminar programa // 1 = na ordem gerado // 2 = ordem inversa): ");
    scanf("%d", &codigo);

    switch(codigo) {
        case 0:
            break;

        case 1:
            printf("O vetor na ordem normal\n");
            for(i = 0; i < 50; i++) {
                printf("%d\n", v[i]);
            }
            break;

        case 2:
            printf("O vetor na ordem inversa\n");
            for(i = 49; i >= 0; i--) {
                printf("%d\n", v[i]);
            }
            break;

        default:
            printf("Codigo inválido");
    }

    return 0;
}
