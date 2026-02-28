#include<stdio.h>

void teste(int *v1, int *v2){
    int i, j = 0, k = 0;
    int v3[20];
    int *p = v3;
    int *ptr1 = v1;
    int *ptr2 = v2;

    do{
        if(k % 2 == 0){
            *p = *ptr1;
            ptr1++;
            i++;
        } else {
            *p = *ptr2;
            ptr2++;
            j++;
        }
        k++;
        p++;
    } while(i < 10 && j < 10);

    // Preenche o restante se algum array não foi completamente percorrido
    while(i < 10){
        *p = *ptr1;
        ptr1++;
        i++;
        p++;
    }
    while(j < 10){
        *p = *ptr2;
        ptr2++;
        j++;
        p++;
    }

    printf("Vetor intercalado:\n");
    for(i = 0; i < 20; i++){
        printf("%d\n", v3[i]);
    }
}

int main(){
    int vetor1[10], vetor2[10];
    int i;

    // Inicialização correta dos vetores
    for(i = 0; i < 10; i++){
        vetor1[i] = i;
    }

    for(i = 0; i < 10; i++){
        vetor2[i] = 10 + i;
    }

    teste(vetor1, vetor2);

    return 0;
}
