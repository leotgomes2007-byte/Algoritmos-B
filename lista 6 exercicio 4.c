#include<stdio.h>
void teste(char *p){
char *inicio, *fim;
int palindromo = 1;

fim = p;
while(*fim != '\0'){
    fim++
}
fim--;

inicio = p;

while(inicio < fim){
        if(*inicio != *fim){
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
}
    if(ehPalindromo) {
        printf("'%s' é um palíndromo!\n", palavra);
    } else {
        printf("'%s' NÃO é um palíndromo.\n", palavra);
    }

}
int main(){
char palavra[40]

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

teste(palavra);

return 0;
}
