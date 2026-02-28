#include<stdio.h>
int main (){
int i;
char p[47];
    printf("Informe uma palavra:\n");
    for(i=0;p[i];i++){
    scanf("%c",p);
    }
    printf("As vogais são:\n");
    for(i=0;p[i];i++){
        if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u'){
            printf("%c\n",p[i]);
        }
    }
return 0;
}
