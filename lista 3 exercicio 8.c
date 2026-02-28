#include<stdio.h>

    int Bissexto(int a){
    if(a%4==0){
        return 1;
    }
    if(a%100==0){
        return 0;
    }
    if(a%400==0){
        return 1;
    }
    }
    int main(){
    int ano,flag=0;

        printf("Informe um ano:");
        scanf("%d",&ano);

        flag=Bissexto(ano);

        if(flag==1){
        printf("O ano é bissexto");
        }else{
        printf("O ano não é bissexto");
        }





    return 0;
    }
