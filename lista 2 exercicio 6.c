#include<stdio.h>
    int calculoArea(int l1, int l2){
    return l1*l2;
    }

    int calculoPerimetro(int l1, int l2){
    return (2*l1)+(2*l2);
    }
int main(){
int lado1,lado2,area,perimetro;

    printf("Informe os lados do retangulo(lado1 lado2):");
    scanf("%d %d",&lado1, &lado2);
    area=calculoArea(lado1,lado2);
    perimetro=calculoPerimetro(lado1,lado2);
    printf("A area do retangulo informado eh %d\n",area);
    printf("O perimetro do retangulo informado eh %d",perimetro);



return 0;
}
