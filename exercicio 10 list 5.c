#include<stdio.h>
int main(){
char palavra[40],*Pc;
int i;
    Pc= palavra;

    printf("Informe uma palavra:");
    scanf ("%s", palavra);

    for(i=0;*Pc;i++,Pc++)
    printf("%c \n",palavra[i]);



return 0;
}
