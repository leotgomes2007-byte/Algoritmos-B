#include<stdio.h>
     int soma(int n){
        if(n==0)
            return 0;
        else if(n>0)
            return n+soma(n-1);
     }
int main(){
    int numero,r;
    printf("Informe um numero:");
    scanf("%d",&numero);

    r=soma(numero);

    printf("Soma dos numeros=%d",r);
return 0;
}
