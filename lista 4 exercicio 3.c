#include<stdio.h>
int fib(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
        else if(n>0)
        return  (n-1)+(n-2);

}
int main(){
    int numero,r;
    printf("Informe o numero:");
    scanf("%d",&numero);

    r=fib(numero);

    printf("o fibonatti deu=%d",r);
return 0;
}

