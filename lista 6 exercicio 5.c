#include<stdio.h>
void teste(char *p1, char *p2){
    int i,igual = 1;
    while(*p1 != '\0' && *p2 != '\0'){
        if(*p1 != *p2){
            igual = 0;
        }
        p1++;
        p2++;
    }
    if(igual == 1){
        printf("Palavras iguais");
    }else{
      printf("Palavras diferentes");
    }
}
int main (){
char palavra1[40],palavra2[40];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf(" %s", palavra2);

teste(palavra1,palavra2);

return 0;
}
