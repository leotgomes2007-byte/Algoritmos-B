#include<stdio.h>
#include<string.h>
int main(){
char s[50],*ps,tam;
int i;

ps=s;

    printf("Informe uma palavra:");
    scanf("%s",ps);

    for(i = 0;*ps != '\0';ps++){
    printf("%c\n",*ps);
    }
//contar quantaas letras a oalavra possui

for(ps=s,tam=0;*ps;ps++,tam++);

printf("A palavra %s tem %d letras",s,tam);








return 0;
}
