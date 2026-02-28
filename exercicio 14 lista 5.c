#include<stdio.h>
int main(){
    char palavra1[40], palavra2[40], *p1, *p2;
    int i,iguais = 1,tam1 = 0,tam2 = 0;

    printf("Informe a primeira palavra:");
    scanf("%s", palavra1);

    printf("Informe a segunda palavra:");
    scanf("%s", palavra2);

    p1 = palavra1;
    p2 = palavra2;

    for(i = 0; *p1; i++, p1++){
        tam1++;
    }

    for(i = 0; *p2; i++, p2++){
        tam2++;
    }

    // RESETAR os ponteiros para o início
    p1 = palavra1;
    p2 = palavra2;

    // Comparar diretamente
    while(*p1 != '\0' && *p2 != '\0') {
        if(*p1 != *p2) {
            iguais = 0;
            break;
        }
        p1++;
        p2++;
    }

    // CORREÇÃO: verificar se são iguais (iguais == 1)
    if(iguais == 1 && *p1 == '\0' && *p2 == '\0'){
        printf("As palavras são iguais");
    }else{
        if(tam1 > tam2){
            printf("A primeira palavra é maior que a segunda");
        }else if(tam2 > tam1){
            printf("A segunda palavra é maior que a primeira");
        }else{
            printf("As palavras têm o mesmo tamanho mas são diferentes");
        }
    }
    return 0;
}
