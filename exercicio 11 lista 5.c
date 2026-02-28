#include<stdio.h>
int main (){
char palavra[40],*pc;
int i,contar = 0;

    pc = palavra;

    printf("Informe uma palavra:");
    scanf("%s", palavra);

    for(i = 0; *pc; i++, pc++)
     contar++;

    printf("A palavra informada tem %d letras",contar);
return 0;
}
