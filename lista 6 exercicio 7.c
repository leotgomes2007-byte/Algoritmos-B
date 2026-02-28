#include<stdio.h>
int teste(int *v,int n){
    int i,c = 0;

for(i=0; i < 10; i++){
    if(*(v+i) == n)
        c++;
}
return c;
}
int main(){
int vetor[10],numero, contar = 0, i;
    printf("Informe um vetor:\n");
    for(i = 0; i < 10; i++){
            printf("vetor[%d]:",i);
            scanf("%d", &vetor[i]);
    }

    printf("Informe um numero:");
    scanf("%d", &numero);

    contar = teste(vetor,numero);

    printf("O valor %d foi encontrado %d vezes no vetor informado",numero,contar);
return 0;
}
