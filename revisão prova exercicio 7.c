#include<stdio.h>

void matriz(int v[]){
    int i,j,matriz[10][10], *p;
    p = &matriz[0][0];

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            *(p + i*10 + j) = v[i] + j + 1;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int i,vetor[10];

    printf("Informe um vetor:\n");
    for(i = 0; i < 10; i++){
        printf("Vetor[%d]:", i);
        scanf("%d", &vetor[i]);
    }

    matriz(vetor);

    return 0;
}
