#include<stdio.h>
#include<ctype.h>

void vogais(char *p){
    int i;
    for(i = 0; *(p + i) != '\0'; i++){
        char letra = toupper(*(p + i));
        if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
            printf("#");
        } else {
            printf("%c", *(p + i));
        }
    }
}

int main(){
    char palavra[45];

    printf("Informe uma palavra:");
    scanf("%s", palavra);

    vogais(palavra);

    return 0;
}
