#include<stdio.h>
int main(){
int i,vetor[10],n,*v,contar=0;

        printf("Informe um vetor\n");
    for(i = 0; i < 10; i++){
    printf("vetor[%d]:",i);
    scanf("%d", &vetor[i]);
}
    v = vetor;

    printf("informe um numero:");
    scanf("%d", &n);

    for(i = 0; i < 10; i++,v++){
    if(*v == n)
        contar++;
    }
    printf("O numero %d foi achada %d vezes no vetor informado", n, contar);

return 0;
}
