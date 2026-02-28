#include <stdio.h>
#include <stdlib.h>

void lerString(char *str, int  t){
int i = 0;
printf("Digite a string letra por letra\n");
while(i < t){
    fflush(stdin);
    scanf("%c", &str[i]);
    i++;
}
}

int main(){
int tam;
char *s;

    printf("tamanho da string:");
    scanf("%d",&tam);

    //alocação dinamica de memoria
    s = (char*) malloc ((tam + 1) * sizeof(char));
    if(!s){
        printf("Erro na alocação dinamica!!");
        exit(-1);
    }
    lerString(s,tam);
    printf("%s",s);
    free(s);
    return 0;
}


