#include<stdio.h>

float calculo(float v, float s){
    if(v <= 1000){
        return s * 0.03;
    }else if(v <= 2000){
        return s * 0.05;
    }else{
        return s * 0.1;
    }
}

void dados(int c, float v, float com, float s, float sT){
    printf("Dados:\n");
    printf("codigo:%d\n",c);
    printf("Vendas:%.2f\n",v);
    printf("comissao:%.2f\n",com);
    printf("salario:%.2f\n",s);
    printf("Salario Total:%.2f\n",sT);
}

int main(){
    int cod;
    float salario,vendas,comissao,salarioT;

    printf("Informe o codigo do vendedor:");
    scanf("%d", &cod);

    printf("Informe o salario do vendedor:");
    scanf("%f", &salario);

    printf("Informe as vendas do vendedor:");
    scanf("%f", &vendas);

    comissao = calculo(vendas,salario);
    salarioT = salario + comissao;

    dados(cod,vendas,comissao,salario,salarioT);

    return 0;
}
