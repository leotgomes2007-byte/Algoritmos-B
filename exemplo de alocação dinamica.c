#include <stdio.h>
#include <stdlib.h>
    void lerMatriz(float *m, int L, int C){
    int i,j,k;

    for(i = 0;i < L; i++){
    for(j = 0;j < C;j++){
    k = i*C + j;
    printf("elemento[%d][%d]:",i,j);
    scanf("%f",(m + k));
    }
    }
    return;
    }

void mostrarMatriz(float *m, int L, int C){
int i,j,k;
    printf("Matriz:");
    for(i = 0;i < L; i++){
    for(j = 0;j < C;j++){
    printf("%.1f\t",*(m + i * C  + j));
}
    printf("\n\t");
    }
}
int main (){
int linha,coluna;
float *a;

    printf("Quantidade de linhas:");
    scanf("%d",&linha);
    printf("Quantidade de colunas");
    scanf("%d", &coluna);

    a =(float*) malloc(linha*coluna*sizeof(float));

    if(!a){
        printf("Erro na alocação dinamica");
        exit(-1);
    }
    lerMatriz(a,linha,coluna);
    mostrarMatriz(a,linha,coluna);
    return 0;
}
