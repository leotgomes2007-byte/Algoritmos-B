#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void soma(int m[][4]){
    int r = 0, *p;
    int j;
    p = &r;
    for(j = 0; j < 4; j++){
        *p += m[0][j];
    }
    printf("A soma dos elementos da primeira linha eh %d\n", r);
}

void produto(int m[][4]){
    int r = 1, *p;
    int j;
    p = &r;
    for(j = 0; j < 4; j++){
        *p *= m[0][j];
    }
    printf("O produto dos elementos da primeira linha eh %d\n", r);
}

void diagonal(int m[][4]){
    int r = 0, *p;
    int i;
    p = &r;
    for(i = 0; i < 4; i++){
        *p += m[i][i];
    }
    printf("A soma dos elementos da diagonal principal eh %d\n", r);
}

void geral(int m[][4]){
    int r = 0, *p;
    int i,j;
    p = &r;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            *p += m[i][j];
        }
    }
    printf("A soma de todos os elementos da matriz eh %d\n", r);
}

int main(){
    int matriz[4][4];
    int i,j;

    srand(time(NULL));

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            matriz[i][j] = rand() % 30;
        }
    }

    // Mostrar a matriz gerada
    printf("Matriz gerada:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    soma(matriz);
    produto(matriz);
    diagonal(matriz);
    geral(matriz);

    return 0;
}
