#include<stdio.h>
void teste(char *p, char l){
int i;
    for(i = 0; *p ; i++){
        if(*(p+i) != l){
            printf("%c", *(p+i));
        }else{
        break;
        }
    }

}
int main(){
char palavra[40],letra;

    printf("Informe a palavra:");
    scanf("%s", palavra);

    printf("Informe a letra:");
    scanf(" %c", &letra);

    teste(palavra,letra);

return 0;
}
