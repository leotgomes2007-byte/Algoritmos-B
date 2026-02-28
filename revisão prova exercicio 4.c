#include<stdio.h>

void encontrar(int *m, int n){
    int i,j;
    int *pn = m;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if (*pn == n)
                printf("O valor %d foi encontrado na posicao %d,%d da matriz\n", n, i, j);
            pn++;
        }
    }
}

int main(){
    int matriz[10][10], numero;
    int i,j;

    printf("Informe uma matriz 10 X 10:\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("matriz[%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Informe um numero para procurar na matriz:");
    scanf("%d", &numero);

    encontrar(&matriz[0][0], numero);

    return 0;
}
