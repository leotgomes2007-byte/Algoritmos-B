#include<stdio.h>
#include<ctype.h>

void logica(char *p){
    int i, contar = 0, vogais = 0;

    // Contar o tamanho da string
    for(i = 0; *(p + i) != '\0'; i++){
        contar++;
    }

    if(contar % 2 == 0){
        // Se tamanho é par: imprimir invertido
        printf("Palavra invertida: ");
        for(i = contar - 1; i >= 0; i--){
            printf("%c", *(p + i));
        }
        printf("\n");
    } else {
        // Se tamanho é ímpar: contar vogais
        for(i = 0; *(p + i) != '\0'; i++){
            char letra = toupper(*(p + i));  // Converter para maiúscula
            if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
                vogais++;
        }
        printf("A palavra informada tem %d vogais\n", vogais);
    }
}

int main(){
    char palavra[20];

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    logica(palavra);

    return 0;
}
