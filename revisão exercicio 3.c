#include<stdio.h>
int main(){
int i,v[4];
float media,soma=0;
    for(i=0;i<4;i++){
        printf("informe o valor da variavel %d:\n",i);
        scanf("%d",&v[i]);
        soma+=v[i];
        }
    media=soma/4;
    printf("A media é %f\n",media);
    for(i=0;i<4;i++){
        if(media<v[i]){
            printf("%d é maior que a media\n",v[i]);
        }
    }
return 0;
}
