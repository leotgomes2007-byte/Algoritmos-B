#include<stdio.h>

int v[30], i, temp;

void inverter() {
    for(i = 0; i < 15; i++) {
        temp = v[i];
        v[i] = v[29 - i];
        v[29 - i] = temp;
    }

}

int main() {
    printf("Informe o vetor:\n");
    for(i = 0; i < 30; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &v[i]);
    }

    inverter();

    printf("\nVetor invertido:\n");
    for(i = 0; i < 30; i++) {
        printf("V[%d]: %d\n", i, v[i]);
    }

    return 0;
}
