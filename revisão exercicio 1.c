#include<stdio.h>
int main(){
int codigo;
float salario,vendas,comissao,salariof;
    printf("Informe o codigo do vendedor:\n");
    scanf("%d",&codigo);
    printf("Informe o salario do vendedor %d:\n",codigo);
    scanf("%f",&salario);
    printf("Informe a quantidade de vendas do vendedor %d:\n",codigo);
    scanf("%f",&vendas);
    if(vendas<=1000){
        comissao=salario*0.03;
    }else if(vendas>=1000 && vendas<=2000){
        comissao=salario*0.05;
    }else{
    comissao=salario*0.1;
    }
    salariof=salario+comissao;
    printf("O funcionario %d, vendeu %.2f recebendo assim %.2f de salario devido a sua comisão",codigo,vendas,salariof);
return 0;
}
