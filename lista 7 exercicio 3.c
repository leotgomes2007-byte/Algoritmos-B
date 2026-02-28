#include <stdlib.h>
#include <stdio.h>

int *alocamatriz(int L, int C){
    int *m;

    m = (int*)malloc(L*C*sizeof(int));
    if(!m){
        printf("Erro na alocação!");
        exit(-1);
    }
    return m;
}

void gerarmatriz (int *m, int L, int C){
    int i, j, k;
        for(i=0;i<L;i++)
            for(j=0;j<C;j++){
            k=i*C+j;
            *(m+k) = rand()%10;
    }
    return ;

}

void mostrarmatriz(int *m, int L, int C){
    int i, j, k;
        for(i=0;i<L;i++){
            for(j=0;j<C;j++){
                k=i*C+j;
                printf("%d\t",*(m+k));
            }
    }
    return ;
}
void somarmatrizes(int *x, int *y, int *z, int L, int C){
    int i, j, k;
        for(i=0;i<L;i++)
            for(j=0;j<C;j++){
            k=i*C+j;
            *(z+k) = *(x+k) + * (y+k);//a soma das matrizes a e b, são alocadas em c
}
return ;
}

int main (){
    int *a,*b, *c, L, C;
    printf("Linhas e colunas");
    scanf("%d%d",&L,&C);

    a=alocamatriz(L,C);
    b=alocamatriz(L,C);
    c=alocamatriz(L,C);


    gerarmatriz(a,L,C);
    gerarmatriz(b,L,C);

    printf("Matriz a:\t");
    mostrarmatriz(a,L,C);

    printf("\n Matriz b:\t");
    mostrarmatriz(b,L,C);

    somarmatrizes(a,b,c,L,C);
    printf("\n Matriz c:\t");
    mostrarmatriz(c,L,C);

    free(a);
    free(b);
    free(c);
}
