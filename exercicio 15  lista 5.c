#include<stdio.h>
int main(){
    char palavra[40], letra, *p1;
    int i, contar = 0;

    printf("Informe a palavra:");
    scanf("%s", palavra);

    printf("Informe a letra:");
    scanf(" %c", &letra);

    p1 = palavra;

    for(i = 0; *p1 != '\0'; i++, p1++){
        if(*p1 == letra){
            contar++;
        }
    }
    printf("A letra %c foi achada %d vezes na palavra informada", letra, contar);

    return 0;
}
