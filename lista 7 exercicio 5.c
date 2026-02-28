#include<stdio.h>
#include<stdlib.h>

int main(){
    int tam, *v, i, contar = 0;

    printf("Informe o tamanho do Vetor:");
    scanf("%d",&tam);

    // ALOCAÇÃO DINAMICA
    v = (int*) malloc((tam) * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    printf("informe o vetor:\n");
    for(i = 0; i < tam; i++){
        printf("vetor[%d]:",i);
        scanf("%d",&v[i]);

        if(v[i]==2 || v[i]==3 || v[i]==5 || v[i]==7){
            contar++;
        } else if (v[i]%2 != 0 && v[i]%3 != 0 && v[i]%5 != 0 && v[i]%7 != 0){
            contar++;
        }
    }

    printf("No vetor informado tem %d numeros primos\n", contar);

    free(v);

    return 0;
}
