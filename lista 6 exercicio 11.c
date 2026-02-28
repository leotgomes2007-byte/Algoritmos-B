#include<stdio.h>
int  teste(int v){
int i,*m;
    for(i = 0; i < 20;i++){
    m = v;
    if(v > *m)
        m = v;
    }
    return *m;
}

int main (){
int vetor[20],i,maior;
    printf("Informe um vetor:\n");

    for(i = 0; i < 20; i++ ){
        printf("vetor[%d]:",i);
        scanf("%d", &vetor[i]);
    }

    maior = teste(vetor);

    printf("O maior valor do vetor eh o %d",maior);
return 0;
}
