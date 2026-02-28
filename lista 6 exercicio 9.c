#include<stdio.h>

void soma(int *v1, int *v2){
    int resultado[10];
    int i;

    for(i = 0; i < 10; i++){
        resultado[i] = *(v1 + i) + *(v2 + i);
    }

    printf("Soma:\n");
    for(i = 0; i < 10; i++){
        printf("%d + %d = %d\n", *(v1 + i), *(v2 + i), resultado[i]);
    }
}

void subtracao(int *v1, int *v2){
    int resultado[10];
    int i;

    for(i = 0; i < 10; i++){
        resultado[i] = *(v1 + i) - *(v2 + i);
    }

    printf("Subtracao:\n");
    for(i = 0; i < 10; i++){
        printf("%d - %d = %d\n", *(v1 + i), *(v2 + i), resultado[i]);
    }
}

void Produtoescalar(int *v1, int *v2){
    int i, produto_escalar = 0;

    for(i = 0; i < 10; i++){
        produto_escalar += (*(v1 + i)) * (*(v2 + i));
    }

    printf("Produto escalar: %d\n", produto_escalar);
}

int main(){
    int vetor1[10], vetor2[10];
    int i;

    printf("Informe um vetor:\n");
    for(i = 0; i < 10; i++){
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("Informe outro vetor:\n");
    for(i = 0; i < 10; i++){
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    soma(vetor1, vetor2);
    subtracao(vetor1, vetor2);
    Produtoescalar(vetor1, vetor2);

    return 0;
}
