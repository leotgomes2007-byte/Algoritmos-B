#include<stdio.h>
void teste (char *p){
int i;
    for(i=0; i<40; i++,p++){
      if(*p !='\0'){
        printf("%c\n",*p);
      }else{
      break;
      }
    }
}
int main (){
char palavra[40];

    printf("informe uma palavra:");
    scanf("%s", palavra);

teste(palavra);
return 0;
}
