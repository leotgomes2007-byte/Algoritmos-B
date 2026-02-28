#include<stdio.h>
int teste(char *p,char l){
int i, c = 0;
    for(i=0; i<40; i++,p++){
      if(*(p+i) == l){
            c++;

}
    }
    return c;
    }
int main (){
char palavra[40],letra;
int contar = 0;
    printf("informe uma palavra:");
    scanf("%s", palavra);

    printf("informe uma letra:");
    scanf(" %c", &letra);

contar  = teste(palavra,letra);

printf("A letra %c foi encontra %d vezes na palavra informada",letra,contar);
return 0;
}


